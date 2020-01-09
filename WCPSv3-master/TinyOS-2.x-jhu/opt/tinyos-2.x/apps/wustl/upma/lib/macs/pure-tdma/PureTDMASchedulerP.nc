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

		interface Alarm<T32khz, uint16_t> as Txdelay;
		interface Alarm<T32khz, uint16_t> as CCATxdelay;

		//Added by Sihoon
		interface ScheduleConfig;
		interface TossimPacketModel;
		interface Queue<TestNetworkMsg *> as HIforwardQ;
		interface Queue<TestNetworkMsg *> as LOforwardQ;
		interface GainRadioModel2 as CCAevent;

	}
}
implementation {
	enum {
		SIMPLE_TDMA_SYNC = 123,
		FRAME_LENGTH = 3,
		RADIO_DEF_POWER = 0,
		RADIO_MAX_POWER = 31,
		CHANNEL_DEF = 22,
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
	message_t HIforwardPktBuffer[MAC_Q];
	message_t LOforwardPktBuffer[MAC_Q];
	uint8_t HIqueueSize;
	uint8_t LOqueueSize;

	//Added by sihoon
	uint32_t slot_;
	uint16_t rcv_count[NETWORK_FLOW];
	uint16_t Tx_count[NETWORK_FLOW];

	bool Receive_flag;
	uint16_t Loss_count;
	uint8_t TxOffset;


	uint8_t get_last_hop_status(uint8_t flow_id_t, uint8_t access_type_t, uint8_t hop_count_t);
	void set_current_hop_status(uint32_t slot_t, uint8_t sender, uint8_t receiver);
	void set_send_status(uint8_t ack_at_send_done, uint8_t taskid);
	void set_send (uint32_t slot_t);

	//added by Sihoon
	void transmission(uint8_t Txing_flowid);

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
		//Flow sender schedule
		{1, 1},
		{1, 2}

		};
	uint8_t schedule_len=32;
	uint32_t superframe_length = 20; //5Hz at most

	/* Task character */
	//index: Task id
	//0 Task Period
	//1 Task deadline
	//2 Task maximum Tx oppertunity
	uint8_t HI_TASK = 1;
	uint8_t LO_TASK = 2;
	uint8_t Task_character[NETWORK_FLOW][4]={
		{0, 0, 0},
		{4, 4, 3},
		{4, 4, 3}
	};
	uint8_t TASK_PERIOD = 0;
	uint8_t TASK_DEAD = 1;
	uint8_t TASK_MAXTX = 2;


	/* Routing Path */
	//0 Primary path
	//1 Backup path
	uint8_t Path[NETWORK_FLOW][2];
	uint8_t PRIMARYPATH = 0;
	uint8_t BACKUPPATH = 1;

	/* Transmit schedule index buffer for each flow */
	uint8_t Sched_idx[NETWORK_FLOW];		//index: flowid, value: schedule index that each node should transmit pkts on the origianl schedule
	uint32_t rcv_slot[NETWORK_FLOW];		//receive slot for each flow
	bool Transmit_ready[NETWORK_FLOW];		//flowid to be transmitted at next slot
	bool receive_lock[NETWORK_FLOW];		//prevent multiple reception from the same flow in a superframe

	/* Flow root indicator */
	bool isFlowroot;
	bool isFlowdest;
	uint8_t Task_rels;

	/* End-to-end delay indicator */
	uint32_t e2e_delay_buffer[15] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};	// index: receive slot, value: count

	/* Tx/Rx status */
	bool send_status[NETWORK_FLOW];								// TRUE if Tx success for a task
	bool Rcv_check_mode;													// for checking pkt reception at TxOffset interval
	uint8_t taskid;
	uint8_t Transmitting_flowid;
	uint8_t My_max_txopper[NETWORK_FLOW];


	bool sync;
	bool requestStop;
	uint32_t sync_count = 0;

	event void Boot.booted(){}

		/******** Schedule-Free MAC *******  */

	command error_t Init.init() {
		uint8_t i, j;
		uint32_t (*VCS_buffer)[VCS_COL_SIZE];

		slotSize = 10 * 32;     //10ms
		bi = 40000; //# of slots in the supersuperframe with only one slot 0 doing sync
		sd = 40000; //last active slot
		cap = 0; // what is this used for? is this yet another superframe length?

		Receive_flag = TRUE;
		Loss_count = 0;
		isFlowroot = FALSE;
		isFlowdest = FALSE;
		Task_rels = 0;
		taskid = 0;
		//backup_schedule[BACKUPNODE] = call ScheduleConfig.backupNode(TOS_NODE_ID);
		//dbg("transmission","backup_schedule[0]:%d\n", backup_schedule[0]);

		//Store primary and backup path for each flow id
		for(i=0; i<NETWORK_FLOW; i++){
			Path[i][PRIMARYPATH] = call ScheduleConfig.primaryNode(i, TOS_NODE_ID);
			Path[i][BACKUPPATH] = call ScheduleConfig.backupNode(i, TOS_NODE_ID);
			//dbg("transmission","Primarypath of flow%d:%d\n", i, Path[i][PRIMARYPATH]);
			//dbg("transmission","Backuppath of flow%d:%d\n", i, Path[i][BACKUPPATH]);

			//Initialize
			rcv_slot[i] = 0;
			rcv_count[i] = 0;
			Transmit_ready[i] = FALSE;
			receive_lock[i] = FALSE;
			Tx_count[i] = 0;

			/* Tx/RX status */
			send_status[i] = FALSE;
			Rcv_check_mode = FALSE;
			My_max_txopper[i] = 0;
		}

		// Set whether each node is flow root or not
		if(call ScheduleConfig.flowsource(TOS_NODE_ID) == TRUE){
			isFlowroot = TRUE;
			taskid = call ScheduleConfig.taskid(TOS_NODE_ID);
			My_max_txopper[taskid] = Task_character[taskid][TASK_MAXTX];
		}else if(call ScheduleConfig.flowdestination(TOS_NODE_ID) == TRUE){
			isFlowdest = TRUE;
		}


		// Find schedule informations and fow criticality of each node
		for(i=0; i<schedule_len; i++) {
			if(schedule[i][1] == TOS_NODE_ID) {
				//backup_schedule[CRITICALITY] = call ScheduleConfig.criticality(schedule[i][6]);		//Assume: primary flows are not inter-cross at some nodes

				Sched_idx[schedule[i][6]] = i;

				// Set Tx start time slot of each flow root node
				if(isFlowroot == TRUE){
					Task_rels = schedule[i][0];
				}
			}
		}
		//dbg("transmission","backup_schedule[CRITICALITY]:%d\n", backup_schedule[CRITICALITY]);



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
		dbg("VCStest","My TxOffset:%d\n", TxOffset);


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

		/* Receiver Setting */


		if ((slot % superframe_length) == 0 ) {
			if (1 == TOS_NODE_ID) {dbg("transmission","-------------\n");};


			//Reset Tx/Rx variable
			for(i=0; i<NETWORK_FLOW; i++){
				rcv_slot[i] = 0;
				Transmit_ready[i] = FALSE;
				receive_lock[i] = FALSE;
				Tx_count[i] = 0;
				My_max_txopper[i] = 0;
			}
			Transmitting_flowid = 0;


			//Count Pkt loss in a superframe
			if(Receive_flag == TRUE){
				Receive_flag = FALSE;
			}else {
				Loss_count = Loss_count + 1;
			}

			if(TOS_NODE_ID == 51 || TOS_NODE_ID == 52){
				//dbg("receive","Loss_count:%d\n", Loss_count);
			}
			/// Queue Initilize
			if(!call HIforwardQ.empty()){
				HIqueueSize = call HIforwardQ.size();
				for(i=0; i<HIqueueSize; i++){
					call HIforwardQ.dequeue();
				}
			}
			if(!call LOforwardQ.empty()){
				LOqueueSize = call LOforwardQ.size();
				for(i=0; i<LOqueueSize; i++){
					call LOforwardQ.dequeue();
				}
			}

			//e2e delay print
			if(TOS_NODE_ID == 51){
				//dbg("receive","e2e_delay_buffer[1]:%d, [2]:%d, [3]:%d, [4]:%d, [5]:%d, [6]:%d, [7]:%d, [8]:%d, [9]:%d, [10]:%d, [11]:%d, [12]:%d\n", e2e_delay_buffer[1], e2e_delay_buffer[2], e2e_delay_buffer[3], e2e_delay_buffer[4], e2e_delay_buffer[5], e2e_delay_buffer[6], e2e_delay_buffer[7], e2e_delay_buffer[8], e2e_delay_buffer[9], e2e_delay_buffer[10], e2e_delay_buffer[11], e2e_delay_buffer[12]);

			}
			return;
 		}

 		if (slot >= sd+1) {
 			return;
 		}
 		if (slot < cap) {
 		} else {
 			set_send (slot % superframe_length); //heart beat control
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
		uint8_t i;
		slot_at_send_done = call SlotterControl.getSlot() % superframe_length;
		ack_at_send_done = call PacketAcknowledgements.wasAcked(msg)?1:0;
		//link failure statistics
		if(ack_at_send_done==0){

			/* set Tx/Rx status */
			if(Tx_count[Transmitting_flowid] == My_max_txopper[Transmitting_flowid]){  // problem -- "Task_character[Transmitting_flowid][TASK_MAXTX]", should be
				dbg("transmission","Reset Tx/Rx status\n");
				Tx_count[Transmitting_flowid] = 0;
				rcv_slot[Transmitting_flowid] = 0;
				My_max_txopper[Transmitting_flowid] = 0;
			}

		}else if(ack_at_send_done==1){
			/* set Tx/Rx status */
			Tx_count[Transmitting_flowid] = 0;
			rcv_slot[Transmitting_flowid] = 0;
			My_max_txopper[Transmitting_flowid] = 0;

			atomic Transmit_ready[Transmitting_flowid] = FALSE;
			if(Transmitting_flowid == HI_TASK){
				HIqueueSize = call HIforwardQ.size();
				for(i=0; i<HIqueueSize; i++){
					call HIforwardQ.dequeue();
				}
			}else if (Transmitting_flowid == LO_TASK){
				LOqueueSize = call LOforwardQ.size();
				for(i=0; i<LOqueueSize; i++){
					call LOforwardQ.dequeue();
				}
			}

		}
		//set ACK variable
		send_status[Transmitting_flowid] = ack_at_send_done;
		//Initialize Transmitting variable
		Transmitting_flowid = 0;

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
		uint8_t i, link;
		uint8_t flow_id_rcv;
		uint8_t current_slot;
		uint8_t curr_hopcount;
		TestNetworkMsg* tmp_payload;
		TestNetworkMsg* HIdataBuffer;
		TestNetworkMsg* LOdataBuffer;
		char * printfResults;

		current_slot = call SlotterControl.getSlot() % superframe_length;
		tmp_payload = (TestNetworkMsg*)payload;
		flow_id_rcv = tmp_payload->flowid; //changed by sihoon
		set_current_hop_status(call SlotterControl.getSlot() % superframe_length, src, TOS_NODE_ID);


		//dbg("transmission","Rcv mode change to OFF\n");

		//check flowid, destination,
		if(TOS_NODE_ID == 3 ||  TOS_NODE_ID == 51 || TOS_NODE_ID == 4 || TOS_NODE_ID == 52){
			if(flow_id_rcv != 0 && receive_lock[flow_id_rcv] == FALSE) {
				// set Rcv_check_mode for deferring Lo task Tx


				rcv_slot[flow_id_rcv] = current_slot;
				Receive_flag = TRUE;
				rcv_count[flow_id_rcv] = rcv_count[flow_id_rcv] + 1;
				Transmit_ready[flow_id_rcv] = TRUE;
				receive_lock[flow_id_rcv] = TRUE;
				curr_hopcount = tmp_payload->hopcount + 1;
				My_max_txopper[flow_id_rcv] = tmp_payload->txopper[curr_hopcount];

				//check e2e delay
				if(TOS_NODE_ID == 51){
					e2e_delay_buffer[current_slot] = e2e_delay_buffer[current_slot] + 1;
				}

				dbg("receive","flow_id:%u, SLOT: %u, src:%u, myID:%u, channel:%u   rcv_count[%d]:%d\n\n", flow_id_rcv, rcv_slot[flow_id_rcv], src, TOS_NODE_ID, call CC2420Config.getChannel(), flow_id_rcv, rcv_count[flow_id_rcv]);

				//Log results
				//Node id,	flow id,	rcv_count, rcv_count_at_slot1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12
				dbg_clear("Log_data","%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d\n", TOS_NODE_ID, flow_id_rcv, rcv_count[flow_id_rcv], e2e_delay_buffer[1], e2e_delay_buffer[2], e2e_delay_buffer[3], e2e_delay_buffer[4], e2e_delay_buffer[5], e2e_delay_buffer[6], e2e_delay_buffer[7], e2e_delay_buffer[8], e2e_delay_buffer[9], e2e_delay_buffer[10], e2e_delay_buffer[11], e2e_delay_buffer[12]);

				//below is the tcp approach based on a global variable on each sensor, tcp_msg, defined in SimMoteP.nc added by Bo
				call SimMote.setTcpMsg(flow_id_rcv, call SlotterControl.getSlot() % superframe_length, src, TOS_NODE_ID, call CC2420Config.getChannel());

				// Queue //
				if(flow_id_rcv == HI_TASK){
					HIqueueSize = call HIforwardQ.size();
					HIdataBuffer = (TestNetworkMsg*)call SubSend.getPayload(&HIforwardPktBuffer[HIqueueSize], sizeof(TestNetworkMsg));
					HIdataBuffer->flowid = tmp_payload->flowid;
					HIdataBuffer->hopcount = tmp_payload->hopcount;
					for(link=0; link<MAX_LINK_HOP; link++){
						HIdataBuffer->txopper[link] = tmp_payload->txopper[link];
						HIdataBuffer->txdelay[link] = tmp_payload->txdelay[link];
					}
					if(HIdataBuffer != NULL){
						call HIforwardQ.enqueue(HIdataBuffer);
					}
				}else if(flow_id_rcv == LO_TASK){
					LOqueueSize = call LOforwardQ.size();
					LOdataBuffer = (TestNetworkMsg*)call SubSend.getPayload(&LOforwardPktBuffer[LOqueueSize], sizeof(TestNetworkMsg));
					LOdataBuffer->flowid = tmp_payload->flowid;
					LOdataBuffer->hopcount = tmp_payload->hopcount;
					for(link=0; link<MAX_LINK_HOP; link++){
						LOdataBuffer->txopper[link] = tmp_payload->txopper[link];
						LOdataBuffer->txdelay[link] = tmp_payload->txdelay[link];
					}
					if(LOdataBuffer != NULL){
						call LOforwardQ.enqueue(LOdataBuffer);
					}
				}

			}
		}
		//printf("RECEIVE: %u->%u, SLOT:%u (time: %s), channel: %u\n", src,TOS_NODE_ID, call SlotterControl.getSlot(), sim_time_string(), call CC2420Config.getChannel());
		signal Receive.receive(msg, payload, len);

	}

	/* For any packet reception */
	//added by sihoon
	// CCA event is triggered when a node receive any packet
  event void CCAevent.anypktreceive() {
		if(Rcv_check_mode == TRUE){
			//dbg("transmission","Rcv mode change to OFF\n");
			atomic Rcv_check_mode = FALSE;
		}
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

    void set_current_hop_status(uint32_t slot_t, uint8_t sender, uint8_t receiver){
    	uint8_t i;

    }// end of set_current_hop_status

		// If it receives ack, then send_status = 1
		void set_send_status(uint8_t ack_at_send_done, uint8_t taskid){
			send_status[taskid] = ack_at_send_done;
		}

		void set_send (uint32_t slot_t){
			uint8_t i,j, link;
			uint32_t slot_norm = slot_t; //Here slot_norm is the real time slot normalized by superframe length
			TestNetworkMsg* tmp_payload;
			TestNetworkMsg* forwardPkt;
			uint8_t flowid;
			uint8_t curr_hopcount;
			uint8_t curr_hop_max_txopper;
			uint8_t curr_hop_delay;

			call CC2420Config.setChannel(CHANNEL_DEF);
			call CC2420Config.sync();

			/* Flow Root Tx */
			if(isFlowroot == TRUE){	// check flow root
				if(Tx_count[taskid] == 0){ // check first Tx
					//dbg("transmission", "check first TX\n");
					if(slot_norm == Task_rels){ // check Tx slot
						tmp_payload = call SubSend.getPayload(&packet, sizeof(TestNetworkMsg));
						atomic Transmitting_flowid = taskid;
						tmp_payload->flowid = taskid;
						tmp_payload->hopcount = 0;
						// Store Tx oppertunity for the routing link
						for(link=0; link<MAX_LINK_HOP; link++){
							tmp_payload->txopper[link] = Task_character[Transmitting_flowid][TASK_MAXTX];
							tmp_payload->txdelay[link] = 0;		//Tx delay setting
						}
						transmission(Transmitting_flowid);
					}
				}else if(Tx_count[taskid] != 0){ //check ReTx
					if(slot_norm > Task_rels){ // check Tx slot
						atomic Transmitting_flowid = taskid;
						if(Tx_count[Transmitting_flowid] < Task_character[Transmitting_flowid][TASK_MAXTX]){ // check maximum Tx oppertunity
							tmp_payload = call SubSend.getPayload(&packet, sizeof(TestNetworkMsg));
							tmp_payload->flowid = Transmitting_flowid;
							tmp_payload->hopcount = 0;
							// Store Tx oppertunity for the routing link
							for(link=0; link<MAX_LINK_HOP; link++){
								tmp_payload->txopper[link] = Task_character[Transmitting_flowid][TASK_MAXTX];
								tmp_payload->txdelay[link] = 0;		//Tx delay setting
							}
							transmission(Transmitting_flowid);
						}
					}
				}

			}else if(isFlowroot == FALSE && isFlowdest == FALSE){
				/* Relay Node Tx, but not destination node */
				// check receiving multi task packets
				if(!call HIforwardQ.empty() || !call LOforwardQ.empty()){
					if(!call HIforwardQ.empty()){		// check HI Q empty
						forwardPkt = (TestNetworkMsg*)call HIforwardQ.head();
						//call HIforwardQ.dequeue();
						tmp_payload = call SubSend.getPayload(&packet, sizeof(TestNetworkMsg));
						atomic Transmitting_flowid = forwardPkt->flowid;
					}else if(!call LOforwardQ.empty()){		//check LO Q empty
						forwardPkt = (TestNetworkMsg*)call LOforwardQ.head();
						tmp_payload = call SubSend.getPayload(&packet, sizeof(TestNetworkMsg));
						atomic Transmitting_flowid = forwardPkt->flowid;

					}
					curr_hopcount = forwardPkt->hopcount + 1;
					curr_hop_delay = forwardPkt->txdelay[curr_hopcount];

					if(slot_norm > rcv_slot[Transmitting_flowid] + curr_hop_delay){ // check Tx slot
						if(Tx_count[Transmitting_flowid] < My_max_txopper[Transmitting_flowid]){	// check maximum Tx oppertunity
							tmp_payload->flowid = forwardPkt->flowid;
							tmp_payload->hopcount = curr_hopcount;
							for(link=0; link<MAX_LINK_HOP; link++){
								tmp_payload->txopper[link] = forwardPkt->txopper[link];
								tmp_payload->txdelay[link] = forwardPkt->txdelay[link];
							}

							transmission(Transmitting_flowid);	// set TxOffset
						}
					}
				}

			}
		}//end set_send


		void transmission( uint8_t Txing_flowid) {
			call AMPacket.setDestination(&packet, Path[Txing_flowid][PRIMARYPATH]);
			call PacketAcknowledgements.requestAck(&packet);
			call CC2420Config.setChannel(CHANNEL_DEF);
			call CC2420Config.setPower(RADIO_DEF_POWER);		//changed by sihoon
			call CC2420Config.sync();

			//call TossimPacketModelCCA.set_cca(schedule[i][4]); //schedule[i][4]: 0, TDMA; 1, CSMA contending; 2, CSMA steal;
			if(TOS_NODE_ID == 2){
				call Txdelay.start(32 * 3);
			}else if(TOS_NODE_ID == 3 && Txing_flowid == LO_TASK){
				Rcv_check_mode = TRUE;
				//dbg("transmission","Rcv mode on\n");
				call CCATxdelay.start(32 * 5);
			}else if(TOS_NODE_ID == 4 && Txing_flowid == LO_TASK){
				Rcv_check_mode = TRUE;
				//dbg("transmission","Rcv mode on\n");
				call CCATxdelay.start(32 * 5);
			}else{
				call Txdelay.start(32 * 0);
			}


		}

		/* Transmit pkt after TxOffset */
		async event void Txdelay.fired() {
			uint8_t current_slot;

			current_slot = call SlotterControl.getSlot() % superframe_length;
			if( call SubSend.send(&packet, sizeof(TestNetworkMsg)) == SUCCESS) {
				atomic Tx_count[Transmitting_flowid] = Tx_count[Transmitting_flowid] + 1;
				dbg("transmission","Tx_count[%d]:%d at slot %d\n",Transmitting_flowid, Tx_count[Transmitting_flowid], current_slot);
			}else {}

		}

		/* For checking pkt reception at TxOffset interval */
		async event void CCATxdelay.fired() {
			uint8_t current_slot;

			if(Rcv_check_mode == TRUE){
				current_slot = call SlotterControl.getSlot() % superframe_length;
				if( call SubSend.send(&packet, sizeof(TestNetworkMsg)) == SUCCESS) {
					atomic Rcv_check_mode = FALSE;
					atomic Tx_count[Transmitting_flowid] = Tx_count[Transmitting_flowid] + 1;
					dbg("transmission","Tx_count[%d]:%d at slot %d\n",Transmitting_flowid, Tx_count[Transmitting_flowid], current_slot);
				}else {}
			}


		}


}
