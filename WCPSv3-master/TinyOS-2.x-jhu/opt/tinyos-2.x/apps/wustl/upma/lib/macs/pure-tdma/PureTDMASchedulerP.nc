/*
 * "Copyright (c) 2007 Washington University in St. Louis.
 * All rights reserved.
 * @author Bo Li
 * @date $Date: 2014/10/17
 */

module PureTDMASchedulerP {
	provides {
		interface Init;
		interface SplitControl;
		interface AsyncSend as Send;
		interface AsyncReceive as Receive;
		interface CcaControl[am_id_t amId];
		interface FrameConfiguration as Frame;
	}
	uses{
		interface AsyncStdControl as GenericSlotter;
		interface RadioPowerControl;
		interface Slotter;
		interface SlotterControl;
		interface FrameConfiguration;
		interface AsyncSend as SubSend;
		interface AsyncSend as BeaconSend;
		interface AsyncReceive as SubReceive;
		interface AMPacket;
		interface Resend;
		interface PacketAcknowledgements;
		interface Boot;
		interface Leds;
		//interface HplMsp430GeneralIO as Pin;

		interface CC2420Config;//Added by Bo
		interface TossimPacketModelCCA;
		interface TossimComPrintfWrite;
		interface SimMote;

		interface Alarm<T32khz, uint16_t>;

		//Added by Sihoon
		interface ScheduleConfig;
		interface TossimPacketModel;
		interface Queue<TestNetworkMsg *> as forwardQ;

	}
}
implementation {
	enum {
		SIMPLE_TDMA_SYNC = 123,
		FRAME_LENGTH = 3,
		RADIO_DEF_POWER = 0,
		RADIO_MAX_POWER = 31,
		MAC_Q = 2,
	};
	bool init;
	uint32_t slotSize;
	uint32_t bi, sd, cap;
	uint8_t coordinatorId;

	message_t *toSend; //this one will become critical later on, and cause segmentation error
	uint8_t toSendLen;

	//Below added by Bo
	message_t packet;
	message_t test_signal_pkt;

	//For Queue
	message_t forwardPktBuffer[MAC_Q];
	uint8_t queueSize;

	//Added by sihoon
	uint32_t slot_;
	uint16_t rcv_count[2] = {0,0};
	uint16_t ReTx_rcv;
	uint16_t trans_count;
	uint16_t first_Retrans_count;
	uint16_t second_Retrans_count;
	uint32_t first_NoAck_count;
	uint32_t second_NoAck_count;
	bool Loss_flag;
	uint16_t Loss_count;
	uint8_t TxOffset;


	uint8_t get_last_hop_status(uint8_t flow_id_t, uint8_t access_type_t, uint8_t hop_count_t);
	void set_current_hop_status(uint32_t slot_t, uint8_t sender, uint8_t receiver);
	void set_send_status(uint32_t slot_at_send_done, uint8_t ack_t);
	void set_send (uint32_t slot_t);
	uint8_t get_flow_id(uint32_t slot_t, uint8_t sender, uint8_t receiver);

	//added by Sihoon
	void transmission(uint8_t schedule_idx, uint8_t ReTx_flag, bool relay_flag);

  	//0 Slot
  	//1 Sender
  	//2 Receiver
  	//3 Channel
  	//4 Access Type:    0: dedicated,  1: shared, 2: steal, 3: ack
  	//5 Flow Type:      0: emergency, 1: regular
  	//6 Flow ID:        1, 2
  	//7 Flow root: root of the flow, i.e., sensor that launch the communcation
  	//8 Send status in sendDone: 0: no-ack, 1: acked
  	//9 Last Hop Status:
  	//10 Hop count in the flow

uint8_t schedule[32][11]={//Source Routing, 16 sensor topology, 2 prime trans, retrans twice, baseline.
	//flow 170, flow sensor
	{1, 1, 3, 22, 0, 1, 1, 1, 0, 0, 1},
	//{2, 3, 51, 22, 0, 1, 1, 1, 0, 0, 2}
	{1, 2, 3, 22, 0, 1, 2, 2, 0, 0, 1}
	};

		//0 backup node
		//1 # of packet loss
		//2 criticality:		0:Lo-criti flow,	1:Hi-criti flow
		//3 Coexistance:		1: Lo-criti flow has Hi-criti packets
uint8_t backup_schedule[4]={0, 0, 0, 0};
uint8_t BACKUPNODE = 0;
uint8_t PKTLOSS = 1;
uint8_t CRITICALITY = 2;
uint8_t COEXISTANCE = 3;

/* Routing Path */
		//0 Primary path
		//1 Backup path
uint8_t Path[NETWORK_FLOW][2];
uint8_t PRIMARYPATH = 0;
uint8_t BACKUPPATH = 1;

	uint8_t schedule_len=32;
	uint32_t superframe_length = 11; //5Hz at most

	bool sync;
	bool requestStop;
	uint32_t sync_count = 0;

	event void Boot.booted(){}

	command error_t Init.init() {
		uint8_t i;
		uint32_t (*VCS_buffer)[VCS_COL_SIZE];

		slotSize = 10 * 32;     //10ms
		bi = 40000; //# of slots in the supersuperframe with only one slot 0 doing sync
		sd = 40000; //last active slot
		cap = 0; // what is this used for? is this yet another superframe length?

		//rcv_count = 0;//added by sihoon
		trans_count = 0;
		ReTx_rcv = 0;
		first_Retrans_count = 0;
		second_Retrans_count = 0;
		first_NoAck_count = 0;
		second_NoAck_count = 0;
		Loss_flag = 0;
		Loss_count = 0;
		//backup_schedule[BACKUPNODE] = call ScheduleConfig.backupNode(TOS_NODE_ID);
		//dbg("transmission","backup_schedule[0]:%d\n", backup_schedule[0]);

		//Store primary and backup path for each flow id
		for(i=0; i<NETWORK_FLOW; i++){
			Path[i][BACKUPPATH] = call ScheduleConfig.primaryNode(i, TOS_NODE_ID);
			Path[i][BACKUPPATH] = call ScheduleConfig.backupNode(i, TOS_NODE_ID);
		}

		for(i=0; i<schedule_len; i++) {
			if(schedule[i][1] == TOS_NODE_ID) {
				backup_schedule[CRITICALITY] = call ScheduleConfig.criticality(schedule[i][6]);		//Assume: primary flows are not inter-cross at some nodes
			}
		}
		//dbg("transmission","backup_schedule[1]:%d\n", backup_schedule[CRITICALITY]);

		coordinatorId = 100;
		init = FALSE;
		toSend = NULL;
		toSendLen = 0;
		sync = FALSE;
		requestStop = FALSE;
		call SimMote.setTcpMsg(0, 0, 0, 0, 0); //reset TcpMsg

		/* set TxOffset based on VCS algorithm */
		// Python to MAC
		VCS_buffer = sim_get_VirtualSchedule();
		if(TOS_NODE_ID <= NETWORK_NODE){
			if(VCS_buffer[TOS_NODE_ID][0] != NULL){
				TxOffset = VCS_buffer[TOS_NODE_ID][0];
			}
		}
		//dbg("VCStest","My TxOffset:%d\n", TxOffset);


		return SUCCESS;
	}

 	command error_t SplitControl.start() {
 		error_t err;
 		if (init == FALSE) {
 			call FrameConfiguration.setSlotLength(slotSize);
 			call FrameConfiguration.setFrameLength(bi + 1);
 			//call FrameConfiguration.setFrameLength(1000);
 		}
 		err = call RadioPowerControl.start();
 		return err;
 	}

 	command error_t SplitControl.stop() {
 		printf("This is sensor: %u and the SplitControl.stop has been reached\n", TOS_NODE_ID);
 		requestStop = TRUE;
 		call GenericSlotter.stop();
 		call RadioPowerControl.stop();
 		return SUCCESS;
 	}

 	event void RadioPowerControl.startDone(error_t error) {
 	 	int i;
 		if (coordinatorId == TOS_NODE_ID) {
 			if (init == FALSE) {
 				signal SplitControl.startDone(error); //start sensor 0
 				call GenericSlotter.start(); //start slot counter
 				call SlotterControl.synchronize(0); //synchronize the rest sensors in the network
 				init = TRUE;
 			}
 		} else {
 			if (init == FALSE) {
 				signal SplitControl.startDone(error); //start all non-zero sensors
 				init = TRUE; //initialization done
 			}
 		}
	}

 	event void RadioPowerControl.stopDone(error_t error)  {
		if (requestStop)  {
			printf("This is sensor: %u and the RadioPowerControl.stopDone has been reached\n", TOS_NODE_ID);
			requestStop = FALSE;
			signal SplitControl.stopDone(error);
		}
	}

 	/****************************
 	 *   Implements the schedule
 	 */
 	async event void Slotter.slot(uint32_t slot) {
 		message_t *tmpToSend;
 		uint8_t tmpToSendLen;
 		uint8_t i;

		atomic slot_ = slot;

 		if (slot == 0 ) {
 			if (coordinatorId == TOS_NODE_ID) {
 				call BeaconSend.send(NULL, 0);
 				dbg("printf","SENSOR: %u has done network synchronization in SLOT: %u at time: %s:\n", TOS_NODE_ID, slot, sim_time_string());
 			};


 			return;
 		}


  		if ((slot % superframe_length) == 0 ) {
	 			for (i=0; i<schedule_len; i++){
	  				schedule[i][8]=0; //re-enable transmission by set the flag bit to 0, implying this transmission is unfinished and to be conducted.
	  				schedule[i][9]=0; //reset "last hop status" to 0 to avoid future confusions, especially in .
						backup_schedule[PKTLOSS] = 0;
		  	}

				//Count Pkt loss in a superframe
				if(Loss_flag == TRUE){
					Loss_flag = FALSE;
				}else {
					Loss_count = Loss_count + 1;
				}

				if(TOS_NODE_ID == 51 || TOS_NODE_ID == 52){
					//dbg("receive","Loss_count:%d\n", Loss_count);
				}
				/// Queue Initilize
				if(!call forwardQ.empty()){
					queueSize = call forwardQ.size();
					for(i=0; i<queueSize; i++){
						call forwardQ.dequeue();
					}
				}
	 		}

 		if (slot >= sd+1) {
 			return;
 		}
 		if (slot < cap) {
 		} else {
 			set_send (slot % superframe_length); //heart beat control

			/*
			//Test signals
			if(slot % superframe_length == 9) {

				if(TOS_NODE_ID == 1){		//sender
					call SubSend.getPayload(&test_signal_pkt, sizeof(TestNetworkMsg));
					call CC2420Config.setChannel(22);
					call CC2420Config.setPower(RADIO_MAX_POWER);
					call CC2420Config.sync();
					if(call TossimPacketModel.send(AM_BROADCAST_ADDR, &test_signal_pkt, 0) != SUCCESS) {
					//if(call BeaconSend.send(NULL, 0) != SUCCESS) {
						dbg("test","---signals fail\n");
					}else {
						dbg("test","---signals success\n");
					}
				}else {		//receiver
					call CC2420Config.setChannel(22);
					call CC2420Config.sync();
				}
			}
			*/
 		}
 	}

	//for Test signals
	event void TossimPacketModel.sendDone(message_t* msg, error_t error){
		//dbg("test","sendDone\n");
	}

	//Receive signal
	event void TossimPacketModel.receive(message_t* msg){
		//dbg("test","---Test Signals	:	TossimPacketModel.receive\n");
	}
	event bool TossimPacketModel.shouldAck(message_t* msg){}

 	async command error_t Send.send(message_t * msg, uint8_t len) {
 		atomic {
 			if (toSend == NULL) {
 				toSend = msg;
 				toSendLen = len;
 				return SUCCESS;
 			}
 		}
 		return FAIL;
 	}

	async event void SubSend.sendDone(message_t * msg, error_t error) {
		uint32_t slot_at_send_done;
		uint8_t ack_at_send_done;
		slot_at_send_done = call SlotterControl.getSlot() % superframe_length;
		ack_at_send_done = call PacketAcknowledgements.wasAcked(msg)?1:0;
		//link failure statistics
		if(ack_at_send_done==0 && backup_schedule[CRITICALITY] == 1){
			backup_schedule[PKTLOSS] = backup_schedule[PKTLOSS] + 1;

			if(backup_schedule[PKTLOSS] == 1) {
				dbg("receive_ack","No Ack --- slot:%d, ack:%d, dest:%d, first_NoAck_count:%d\n", call SlotterControl.getSlot(), ack_at_send_done, call AMPacket.destination(msg), ++first_NoAck_count );
				dbg("receive_ack","backup_schedule[PKTLOSS]:%d\n",backup_schedule[PKTLOSS]);
			}else if (backup_schedule[PKTLOSS] == 2) {
				dbg("receive_ack","No Ack --- slot:%d, ack:%d, dest:%d, second_NoAck_count:%d\n", call SlotterControl.getSlot(), ack_at_send_done, call AMPacket.destination(msg), ++second_NoAck_count );
				dbg("receive_ack","backup_schedule[PKTLOSS]:%d\n",backup_schedule[PKTLOSS]);
			}

		}
		set_send_status(slot_at_send_done, ack_at_send_done);
		//printf("Slot: %u, SENSOR:%u, Sent to: %u with %s @ %s\n", call SlotterControl.getSlot(), TOS_NODE_ID, call AMPacket.destination(msg), call PacketAcknowledgements.wasAcked(msg)? "ACK":"NOACK", sim_time_string());

		if (msg == &packet) {
			if (call AMPacket.type(msg) != SIMPLE_TDMA_SYNC) {
				signal Send.sendDone(msg, error);
			} else {
			}
		}
	}

 	async command error_t Send.cancel(message_t *msg) {
  		atomic {
 			if (toSend == NULL) return SUCCESS;
 			atomic toSend = NULL;
 		}
 		return call SubSend.cancel(msg);
 	}

	/**
	 * Receive
	 */
	async event void SubReceive.receive(message_t *msg, void *payload, uint8_t len) {
		am_addr_t src = call AMPacket.source(msg);
		uint8_t i;
		uint8_t flow_id_rcv;
		uint8_t current_slot;
		TestNetworkMsg* tmp_payload;
		TestNetworkMsg* dataBuffer;
		char * printfResults;


		current_slot = call SlotterControl.getSlot() % superframe_length;
		tmp_payload = (TestNetworkMsg*)payload;
		set_current_hop_status(call SlotterControl.getSlot() % superframe_length, src, TOS_NODE_ID);
		//flow_id_rcv=get_flow_id(call SlotterControl.getSlot() % superframe_length, src, TOS_NODE_ID);
		flow_id_rcv = tmp_payload->flowid; //changed by sihoon
		//dbg("test","****Test Signals	:	Subreceive.receive\n");


		/// Print Rcv data ///
		if(flow_id_rcv != 0) {

			if(TOS_NODE_ID == 3){
				for(i=0; i<schedule_len; i++) {	//for counting receive of 1ReTx
					if(schedule[i][2] == TOS_NODE_ID && schedule[i][6] == flow_id_rcv && schedule[i][0] == current_slot) {
						//original transmission
						Loss_flag = TRUE;
						dbg("receive","flow_id:%u, SLOT: %u, src:%u, myID:%u, channel:%u   rcv_count[%d]:%d\n", flow_id_rcv, current_slot, src, TOS_NODE_ID, call CC2420Config.getChannel(), flow_id_rcv-1,++rcv_count[flow_id_rcv-1]);

					}else if(schedule[i][2] == TOS_NODE_ID && schedule[i][6] == flow_id_rcv && schedule[i][0] == current_slot - 1) {
						//1 ReTx transmission
						Loss_flag = TRUE;
						dbg("receive","flow_id:%u, SLOT: %u, src:%u, myID:%u, channel:%u   ReTx_rcv:%d\n", flow_id_rcv, current_slot, src, TOS_NODE_ID, call CC2420Config.getChannel(), ++ReTx_rcv);
					}
				}


				//below is the tcp approach based on a global variable on each sensor, tcp_msg, defined in SimMoteP.nc added by Bo
				call SimMote.setTcpMsg(flow_id_rcv, call SlotterControl.getSlot() % superframe_length, src, TOS_NODE_ID, call CC2420Config.getChannel());

			}else if(TOS_NODE_ID == 52) {
				Loss_flag = 1;

				dbg("receive","flow_id:%u, SLOT: %u, src:%u, myID:%u, channel:%u   rcv_count[%d]:%d\n", flow_id_rcv, call SlotterControl.getSlot() % superframe_length, src, TOS_NODE_ID, call CC2420Config.getChannel(), flow_id_rcv-1,++rcv_count[flow_id_rcv-1]);

				//dbg("printf","RSSI:%d\n",call CC2420Packet.getRssi(msg));

			}

			// Queue //
			queueSize = call forwardQ.size();
			dataBuffer = (TestNetworkMsg*)call SubSend.getPayload(&forwardPktBuffer[queueSize], sizeof(TestNetworkMsg));
			dataBuffer->flowid = tmp_payload->flowid;
			if(dataBuffer != NULL){
				call forwardQ.enqueue(dataBuffer);
			}

		}
		//printf("RECEIVE: %u->%u, SLOT:%u (time: %s), channel: %u\n", src,TOS_NODE_ID, call SlotterControl.getSlot(), sim_time_string(), call CC2420Config.getChannel());
		signal Receive.receive(msg, payload, len);
		// printf("Massage, %u\n",msg);
		// printf("payload, %u\n",payload);
		// printf("len, %u\n",len);
	}

	async event void Alarm.fired() {
		//dbg("printf","Now\n");

		set_send (slot_ % superframe_length); //heart beat control

	}

	/**
	 * Frame configuration
	 * These interfaces are provided for external use, which is misleading as these interfaces are already implemented in GenericClotterC and P
	 */
  	command void Frame.setSlotLength(uint32_t slotTimeBms) {
		atomic slotSize = slotTimeBms;
		call FrameConfiguration.setSlotLength(slotSize);
 	}
 	command void Frame.setFrameLength(uint32_t numSlots) {
 		atomic bi = numSlots;
		call FrameConfiguration.setFrameLength(bi + 1);
 	}
 	command uint32_t Frame.getSlotLength() {
 		return slotSize;
 	}
 	command uint32_t Frame.getFrameLength() {
 		return bi + 1;
 	}

	/**
	 * MISC functions
	 */
	async command void *Send.getPayload(message_t * msg, uint8_t len) {
		return call SubSend.getPayload(msg, len);
	}

	async command uint8_t Send.maxPayloadLength() {
		return call SubSend.maxPayloadLength();
	}

	//provide the receive interface
	command void Receive.updateBuffer(message_t * msg) { return call SubReceive.updateBuffer(msg); }

	default async event uint16_t CcaControl.getInitialBackoff[am_id_t id](message_t * msg, uint16_t defaultbackoff) {
		return 0;
	}

	default async event uint16_t CcaControl.getCongestionBackoff[am_id_t id](message_t * msg, uint16_t defaultBackoff) {
		return 0;
	}

	default async event bool CcaControl.getCca[am_id_t id](message_t * msg, bool defaultCca) {
		return FALSE;
	}

    event void CC2420Config.syncDone(error_t error){}
    async event void BeaconSend.sendDone(message_t * msg, error_t error){}

    uint8_t get_last_hop_status(uint8_t flow_id_t, uint8_t access_type_t, uint8_t hop_count_t){
    	uint8_t last_hop_status=0;
    	uint8_t i;
    	for (i=0; i<schedule_len; i++){
    		if(schedule[i][0] <= call SlotterControl.getSlot() % superframe_length){
    			if (schedule[i][6]==flow_id_t){//check flow ID
					if(schedule[i][10] == (hop_count_t-1)){//check the previous hop-count
						if(schedule[i][9]==1){
							last_hop_status = schedule[i][9];
							//printf("Sensor:%u, GETTING RECEIVE, Slot:%u, %u, %u, %u, %u, %u , %u, %u, %u, %u, %u.\n", TOS_NODE_ID, schedule[i][0], schedule[i][1], schedule[i][2], schedule[i][3], schedule[i][4], schedule[i][5], schedule[i][6], schedule[i][7], schedule[i][8], schedule[i][9], schedule[i][10]);
						}
					}
    			}
    		}
		}
		return last_hop_status;
    }//end of get_last_hop_status

    void set_current_hop_status(uint32_t slot_t, uint8_t sender, uint8_t receiver){
    	uint8_t i;
    	for (i=0; i<schedule_len; i++){
    		if(schedule[i][0]==slot_t){// check send-receive pairs 1 slot before/after current slot
    			if(schedule[i][1] == sender){//check sender
					if(schedule[i][2] == receiver){//check receiver
						schedule[i][9]=1;
						//printf("Sensor:%u, SETTING RECEIVE, Slot:%u, %u, %u, %u, %u, %u , %u, %u, %u, [9]%u, %u.\n", TOS_NODE_ID, schedule[i][0], schedule[i][1], schedule[i][2], schedule[i][3], schedule[i][4], schedule[i][5], schedule[i][6], schedule[i][7], schedule[i][8], schedule[i][9], schedule[i][10]);
					}
				}
    		}
		}
    }// end of set_current_hop_status

    uint8_t get_flow_id(uint32_t slot_t, uint8_t sender, uint8_t receiver){
    	uint8_t i;
    	uint8_t flow_id_t=0;
    	for (i=0; i<schedule_len; i++){
    		if(schedule[i][0]==slot_t){// check send-receive pairs 1 slot before/after current slot
    			if(schedule[i][1] == sender){//check sender
					if(schedule[i][2] == receiver){//check receiver
						flow_id_t=schedule[i][6];
					}
				}
    		}
		}
		return flow_id_t;
    } // end of get_flow_id

	void set_send_status(uint32_t slot_at_send_done, uint8_t ack_at_send_done){
   		uint8_t k, i;
   		uint8_t flow_id_at_send_done;
   		uint8_t root_id_at_send_done;
   		uint8_t access_type_at_send_done;


		for (k=0; k<schedule_len; k++){
			if(schedule[k][0] == slot_at_send_done && schedule[k][1] ==TOS_NODE_ID){
				flow_id_at_send_done=schedule[k][6];
				root_id_at_send_done=schedule[k][7];
				access_type_at_send_done=schedule[k][4]; // get the right line of the schedule
			}
		}

		//printf("SENSOR:%u, Slot:%u, i:%u\n", TOS_NODE_ID, slot_at_send_done, i);
		if(access_type_at_send_done == 0 || access_type_at_send_done == 2){ // if this is a dedicated slot
		//if(access_type_at_send_done == 0){ // if this is a dedicated slot
			if (ack_at_send_done==1){
				for (i=0; i<schedule_len; i++){
					if (schedule[i][6]==flow_id_at_send_done){ //check flow id
						if(schedule[i][7] == root_id_at_send_done){//check root
							// if (TOS_NODE_ID == 161 || TOS_NODE_ID == 169 || TOS_NODE_ID == 166 || TOS_NODE_ID == 173){
							// 	printf("$$$SENSOR: %u has successfully sent a packet in SLOT:%u.\n", TOS_NODE_ID, slot_at_send_done);
							// }
							schedule[i][8]=1;
							//printf("***DEDICATED: SENSOR: %u, KILLING POTENTIAL SEND: Slot:%u, %u, %u, %u, %u, %u , %u, %u, %u.\n", TOS_NODE_ID, schedule[i][0], schedule[i][1], schedule[i][2], schedule[i][3], schedule[i][4], schedule[i][5], schedule[i][6], schedule[i][7], schedule[i][8]);
						}
					}
				}
			}
			else{ //Retransmit at next slot

			}
		}else if(access_type_at_send_done==1){//if this is a shared slot
			//printf("SHARED: SENSOR: %u, DISABLING: Slot:%u, %u, %u, %u, %u, %u , %u, %u, %u.\n", TOS_NODE_ID, schedule[i][0], schedule[i][1], schedule[i][2], schedule[i][3], schedule[i][4], schedule[i][5], schedule[i][6], schedule[i][7], schedule[i][8]);
			if (ack_at_send_done==1){
				//printf("SHARED111: SENSOR: %u, KILLING POTENTIAL SEND: Slot:%u, %u, %u, %u, %u, %u , %u, %u, %u.\n", TOS_NODE_ID, schedule[i][0], schedule[i][1], schedule[i][2], schedule[i][3], schedule[i][4], schedule[i][5], schedule[i][6], schedule[i][7], schedule[i][8]);
			}
			else{
				for (i=0; i<schedule_len; i++){
					if (schedule[i][6]==flow_id_at_send_done){ //check flow id
							schedule[i][8]=1;
					}
				}
				//printf("SHARED222: SENSOR: %u, KILLING POTENTIAL SEND: Slot:%u, %u, %u, %u, %u, %u , %u, %u, %u.\n", TOS_NODE_ID, schedule[i][0], schedule[i][1], schedule[i][2], schedule[i][3], schedule[i][4], schedule[i][5], schedule[i][6], schedule[i][7], schedule[i][8]);
			}
		}
   }// end of set_send_status

   	void set_send (uint32_t slot_t){
		uint8_t i,j;
		uint32_t slot_norm = slot_t; //Here slot_norm is the real time slot normalized by superframe length
		TestNetworkMsg* tmp_payload;
		// bool idleStatus;
		for (i=0; i<schedule_len; i++){
  			if (slot_norm == schedule[i][0]){//check slot
  				if(TOS_NODE_ID == schedule[i][1] || TOS_NODE_ID == schedule[i][2]){//check sender & receiver id
  					if(schedule[i][10]>1){ //check if this is on a multi-hop path
  						if(TOS_NODE_ID == schedule[i][1] && schedule[i][8]==0){//No. 8 in the schedule is Send status in sendDone
  			  				if (get_last_hop_status(schedule[i][6], schedule[i][4], schedule[i][10])){// if above so, check delivery status of last hop
										/*
									tmp_payload = call SubSend.getPayload(&packet, sizeof(TestNetworkMsg));
									tmp_payload->flowid = schedule[i][6];

									call CC2420Config.setChannel(schedule[i][3]);
									call CC2420Config.setPower(RADIO_DEF_POWER);
									call CC2420Config.sync();
  								call AMPacket.setDestination(&packet, schedule[i][2]);
  								call PacketAcknowledgements.requestAck(&packet);

  								call TossimPacketModelCCA.set_cca(schedule[i][4]); //schedule[i][4]: 0, TDMA; 1, CSMA contending; 2, CSMA steal;
	  							call SubSend.send(&packet, sizeof(TestNetworkMsg));
									*/
										transmission(i,0,TRUE);

  			  				}// end check last hop
  			  			}// end sender check
  			  			if(TOS_NODE_ID == schedule[i][2] && schedule[i][8]==0){
 	 			  				//printf("RECEIVER, HOP >1: %u, slot: %u, channel: %u, time: %s\n", TOS_NODE_ID, slot_norm, schedule[i][3], sim_time_string());
  			  					call CC2420Config.setChannel(schedule[i][3]);
  								call CC2420Config.sync();
  						}//end receiver check
  					}
						// Flow Root Tx
						else{
  						if(TOS_NODE_ID == schedule[i][1] && schedule[i][8]==0){
								dbg("test","\n\n\n");
								dbg("test","slot start time\n");

								transmission(i,0,FALSE); 	//i: schedule_idx, 0:ReTx_flag, FALSE: relay_flag

	  					}
							// Receiver Setting
  						if(TOS_NODE_ID == schedule[i][2] && schedule[i][8]==0){
			  				call CC2420Config.setChannel(schedule[i][3]);
  							call CC2420Config.sync();
  						}
  					}//end else
  				}//end slot check
  			}
				// ReTx schedule
				else if(slot_norm-1 == schedule[i][0]) {					//check previous transmission slot
					if(schedule[i][1] == TOS_NODE_ID) {					//check sender
						if(backup_schedule[CRITICALITY] == 1) {			//check Hi-cirtical flow
							if(schedule[i][8] == 0) {									//check no-ack
								if(backup_schedule[PKTLOSS] == 1) {	//check retransmission count
										//transmission(i,1,FALSE);		//First Retransmission
								}//end retransmission count
							}//end no-ack
						}//end Hi-cirtical flow
					}//end sender
				}else if(slot_norm-2 == schedule[i][0]) {		//check 2 slot previous slot
					if(schedule[i][1] == TOS_NODE_ID) {		//check sender
							if(backup_schedule[CRITICALITY] == 1) {		//check Hi-critical flow
								if(schedule[i][8] == 0) {		//check no-ack

									if(TOS_NODE_ID == 52) {	//Test 2nd retransmission receive
										call CC2420Config.setChannel(schedule[i][3]);
										call CC2420Config.sync();
									}

									if(backup_schedule[PKTLOSS] == 2) {		//check retransmission count
										//transmission(i,2,FALSE);		//Second Retransmission
									}//end retransmission count
								}//end no-ack
							}//end Hi-cirtical flow
					}//end sender
				}//end 2slot previous slot

  		}//end for
   	}//end set_send

		void transmission(uint8_t schedule_idx, uint8_t ReTx_flag, bool relay_flag) {
			TestNetworkMsg* tmp_payload;
			TestNetworkMsg* forwardPkt;
			uint8_t i;

			i = schedule_idx;

			/// check the flow root Tx or the relay Tx
			if(relay_flag == FALSE){
				tmp_payload = call SubSend.getPayload(&packet, sizeof(TestNetworkMsg));
				tmp_payload->flowid = schedule[i][6];
			}else{
				if(!call forwardQ.empty()){
					forwardPkt = (TestNetworkMsg*)call forwardQ.head();
					call forwardQ.dequeue();

					tmp_payload = call SubSend.getPayload(&packet, sizeof(TestNetworkMsg));
					tmp_payload->flowid = forwardPkt->flowid;
				}else{
					return;
				}
			}


			if(ReTx_flag == 2) {	// Second retransmission change their destination
				call CC2420Config.setChannel(schedule[i][3]);
				call CC2420Config.setPower(RADIO_DEF_POWER);		//changed by sihoon
				call CC2420Config.sync();
				//call AMPacket.setDestination(&packet, backup_schedule[BACKUPNODE]);
				//dbg("transmission","!!!!!!!!!!!!!!!!!backupnode:%d\n", backup_schedule[BACKUPNODE]);
			}else if(ReTx_flag == 1) {
				call CC2420Config.setChannel(schedule[i][3]);
				call CC2420Config.setPower(RADIO_DEF_POWER);		//changed by sihoon
				call CC2420Config.sync();
				call AMPacket.setDestination(&packet, schedule[i][2]);
			}else if(ReTx_flag == 0) {
				call CC2420Config.setChannel(schedule[i][3]);
				call CC2420Config.setPower(RADIO_DEF_POWER);		//changed by sihoon
				call CC2420Config.sync();
				call AMPacket.setDestination(&packet, schedule[i][2]);
			}

			call PacketAcknowledgements.requestAck(&packet);
			call TossimPacketModelCCA.set_cca(schedule[i][4]); //schedule[i][4]: 0, TDMA; 1, CSMA contending; 2, CSMA steal;
			if( call SubSend.send(&packet, sizeof(TestNetworkMsg)) == SUCCESS) {
				if(ReTx_flag == 0)
					dbg("transmission","trans_count:%d\n", ++trans_count);
				else if(ReTx_flag == 1)
					dbg("transmission","first_Retrans_count:%d\n", ++first_Retrans_count);
				else if(ReTx_flag == 2)
					dbg("transmission","second_Retrans_count:%d\n", ++second_Retrans_count);

			}else {}
		}

}
