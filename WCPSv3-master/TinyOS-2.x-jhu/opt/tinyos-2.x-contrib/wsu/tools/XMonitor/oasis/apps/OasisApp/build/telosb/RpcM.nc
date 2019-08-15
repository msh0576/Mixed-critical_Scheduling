// *** WARNING ****** WARNING ****** WARNING ****** WARNING ****** WARNING ***
// ***                                                                     ***
// *** This file was automatically generated by generateRpc.pl.   ***
// *** Any and all changes made to this file WILL BE LOST!                 ***
// ***                                                                     ***
// *** WARNING ****** WARNING ****** WARNING ****** WARNING ****** WARNING ***

includes OasisType;
includes RamSymbols;
includes Rpc;

module RpcM {
  provides {
    interface StdControl;

    /*** events that are rpc-able ***/
  }

  uses {
    
   
	interface Receive as CommandReceive;
	interface Send as ResponseSend;

#ifndef USE_MULTIHOP_LQI
    interface SendMsg as ResponseSendMsg;
#endif

	interface Leds;
  
    /*** commands that are rpc-able ***/

    interface EventConfig as EventReportM_EventConfig;
    command uint8_t GenericCommProM_getRFChannel (  );
    command uint8_t GenericCommProM_getRFPower (  );
    command result_t GenericCommProM_setRFChannel (   uint8_t channel );
    command result_t GenericCommProM_setRFPower (   uint8_t level );
    interface RouteRpcCtrl as MultiHopLQI_RouteRpcCtrl;
    command ramSymbol_t RamSymbolsM_peek (   unsigned int memAddress, uint8_t length, bool dereference );
    command unsigned int RamSymbolsM_poke (   ramSymbol_t* symbol );
    command result_t SNMSM_ledsOn (   uint8_t ledColorParam );
    command void SNMSM_restart (  );
    interface SensingConfig as SmartSensingM_SensingConfig;
  }
}
implementation {
  #include "debug.h"

  TOS_Msg cmdStore;
  TOS_Msg sendMsgBuf;
  TOS_MsgPtr sendMsgPtr;

  uint16_t cmdStoreLength;
  uint16_t queryID;
  uint16_t returnAddress;
  bool processingCommand;
// 9/20/2007 Yang-
//	bool sendingResponse;
//--2/5/2008 HRJ
  bool taskBusy;  
//
  uint8_t seqno;

  uint16_t debugSequenceNo;

  static const uint8_t args_sizes[25] = {
    sizeof(uint8_t),
    sizeof(uint8_t)+sizeof(uint8_t),
    0,
    0,
    sizeof(uint8_t),
    sizeof(uint8_t),
    0,
    0,
    sizeof(uint16_t),
    sizeof(uint16_t),
    sizeof(bool),
    sizeof(unsigned int)+sizeof(uint8_t)+sizeof(bool),
    sizeof(ramSymbol_t),
    sizeof(uint8_t),
    0,
    sizeof(uint8_t),
    sizeof(uint8_t),
    0,
    sizeof(uint8_t),
    sizeof(uint8_t),
    sizeof(uint8_t)+sizeof(uint8_t),
    sizeof(uint8_t)+sizeof(uint8_t),
    sizeof(uint8_t),
    sizeof(uint8_t)+sizeof(uint16_t),
    sizeof(uint8_t)+sizeof(uint16_t)
  };

  static const uint8_t return_sizes[25] = {
    sizeof(uint8_t),
    sizeof(result_t),
    sizeof(uint8_t),
    sizeof(uint8_t),
    sizeof(result_t),
    sizeof(result_t),
    sizeof(uint16_t),
    sizeof(result_t),
    sizeof(result_t),
    sizeof(result_t),
    sizeof(result_t),
    sizeof(ramSymbol_t),
    sizeof(unsigned int),
    sizeof(result_t),
    sizeof(void),
    sizeof(uint8_t),
    sizeof(uint8_t),
    sizeof(uint8_t),
    sizeof(uint16_t),
    sizeof(uint16_t),
    sizeof(result_t),
    sizeof(result_t),
    sizeof(result_t),
    sizeof(result_t),
    sizeof(result_t)
  };

  command result_t StdControl.init() {
    sendMsgPtr = &sendMsgBuf;   
    processingCommand=FALSE;
// 9/20/2007 Yang-
	//sendingResponse=FALSE;
	seqno = 0;     
//--2/5/2008 HRJ
	taskBusy = FALSE;

  	debug_init();
    return SUCCESS;
  }

  command result_t StdControl.start() {
    return SUCCESS;
  }

  command result_t StdControl.stop() {
    return SUCCESS;
  }
  void tryNextSend();
  task void sendResponse();

  task void processCommand(){
    //RpcCommandMsg* msg = (RpcCommandMsg*)cmdStore.data;
	ApplicationMsg* RecvMsg = (ApplicationMsg*)cmdStore.data;
	RpcCommandMsg* msg = (RpcCommandMsg*)RecvMsg->data;

    uint8_t* byteSrc = msg->data;
    uint16_t maxLength;
    uint16_t id = msg->commandID;
    
	NetworkMsg* NMsg = (NetworkMsg*)(sendMsgPtr->data);
	//RpcResponseMsg *responseMsg = (RpcResponseMsg*)call ResponseSend.getBuffer(responseMsgPtr, &maxLength);
    ApplicationMsg *AppMsg = (ApplicationMsg*)call ResponseSend.getBuffer(sendMsgPtr, &maxLength);
    RpcResponseMsg *responseMsg = (RpcResponseMsg*)AppMsg->data;
	NMsg->qos = 7; //highest priority
	dbg(DBG_USR2, "processing command id %d, transaction %d\n", msg->commandID, msg->transactionID);
    

	//debug(DBG_RPC, "processCommandUpper: %i %i\n", TOS_LOCAL_ADDRESS , debugSequenceNo);

    /*fill in the response message headers*/
    responseMsg->transactionID = msg->transactionID;
    responseMsg->commandID = msg->commandID;
    responseMsg->sourceAddress = TOS_LOCAL_ADDRESS;
    responseMsg->errorCode = RPC_SUCCESS;
    responseMsg->dataLength = 0;
	
	

    if ((msg->unix_time != G_Ident.unix_time) || (msg->user_hash != G_Ident.user_hash)) {
		responseMsg->errorCode = RPC_WRONG_XML_FILE;
    } else if( (id < 25) && (msg->dataLength != args_sizes[id]) ) {
      responseMsg->errorCode = RPC_GARBAGE_ARGS;
      dbg(DBG_USR2, "param size doesn't match\n");
    } else if( (id < 25) && (return_sizes[id] + sizeof(RpcResponseMsg) > maxLength) ) {
      responseMsg->errorCode = RPC_RESPONSE_TOO_LARGE;
      dbg(DBG_USR2,"Return type is too large for the response packet");
    } else {
		//debug(DBG_RPC, "processCommand: %i %i\n", TOS_LOCAL_ADDRESS , debugSequenceNo);

		switch( id ) {

      /*** EventReportM.EventConfig.getReportLevel ***/
  case 0: {
    uint8_t RPC_returnVal;
    uint8_t RPC_type;
      dbg(DBG_USR2, "handling commandId 0\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call EventReportM_EventConfig.getReportLevel(  RPC_type );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint8_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint8_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint8_t )= %d\n", sizeof ( uint8_t ));
  } break;

      /*** EventReportM.EventConfig.setReportLevel ***/
  case 1: {
    result_t RPC_returnVal;
    uint8_t RPC_type;
    uint8_t RPC_level;
      dbg(DBG_USR2, "handling commandId 1\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    byteSrc += sizeof(uint8_t);
    memcpy( &RPC_level, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call EventReportM_EventConfig.setReportLevel(  RPC_type, RPC_level );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** GenericCommProM.getRFChannel ***/
  case 2: {
    uint8_t RPC_returnVal;
      dbg(DBG_USR2, "handling commandId 2\n");
    RPC_returnVal = call GenericCommProM_getRFChannel( );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint8_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint8_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint8_t )= %d\n", sizeof ( uint8_t ));
  } break;

      /*** GenericCommProM.getRFPower ***/
  case 3: {
    uint8_t RPC_returnVal;
      dbg(DBG_USR2, "handling commandId 3\n");
    RPC_returnVal = call GenericCommProM_getRFPower( );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint8_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint8_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint8_t )= %d\n", sizeof ( uint8_t ));
  } break;

      /*** GenericCommProM.setRFChannel ***/
  case 4: {
    result_t RPC_returnVal;
    uint8_t RPC_channel;
      dbg(DBG_USR2, "handling commandId 4\n");
    memcpy( &RPC_channel, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call GenericCommProM_setRFChannel(  RPC_channel );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** GenericCommProM.setRFPower ***/
  case 5: {
    result_t RPC_returnVal;
    uint8_t RPC_level;
      dbg(DBG_USR2, "handling commandId 5\n");
    memcpy( &RPC_level, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call GenericCommProM_setRFPower(  RPC_level );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** MultiHopLQI.RouteRpcCtrl.getBeaconUpdateInterval ***/
  case 6: {
    uint16_t RPC_returnVal;
      dbg(DBG_USR2, "handling commandId 6\n");
    RPC_returnVal = call MultiHopLQI_RouteRpcCtrl.getBeaconUpdateInterval( );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint16_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint16_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint16_t )= %d\n", sizeof ( uint16_t ));
  } break;

      /*** MultiHopLQI.RouteRpcCtrl.releaseParent ***/
  case 7: {
    result_t RPC_returnVal;
      dbg(DBG_USR2, "handling commandId 7\n");
    RPC_returnVal = call MultiHopLQI_RouteRpcCtrl.releaseParent( );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** MultiHopLQI.RouteRpcCtrl.setBeaconUpdateInterval ***/
  case 8: {
    result_t RPC_returnVal;
    uint16_t RPC_seconds;
      dbg(DBG_USR2, "handling commandId 8\n");
    memcpy( &RPC_seconds, byteSrc, sizeof(uint16_t) );
    RPC_returnVal = call MultiHopLQI_RouteRpcCtrl.setBeaconUpdateInterval(  RPC_seconds );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** MultiHopLQI.RouteRpcCtrl.setParent ***/
  case 9: {
    result_t RPC_returnVal;
    uint16_t RPC_parentAddr;
      dbg(DBG_USR2, "handling commandId 9\n");
    memcpy( &RPC_parentAddr, byteSrc, sizeof(uint16_t) );
    RPC_returnVal = call MultiHopLQI_RouteRpcCtrl.setParent(  RPC_parentAddr );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** MultiHopLQI.RouteRpcCtrl.setSink ***/
  case 10: {
    result_t RPC_returnVal;
    bool RPC_enable;
      dbg(DBG_USR2, "handling commandId 10\n");
    memcpy( &RPC_enable, byteSrc, sizeof(bool) );
    RPC_returnVal = call MultiHopLQI_RouteRpcCtrl.setSink(  RPC_enable );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** RamSymbolsM.peek ***/
  case 11: {
    ramSymbol_t RPC_returnVal;
    unsigned int RPC_memAddress;
    uint8_t RPC_length;
    bool RPC_dereference;
      dbg(DBG_USR2, "handling commandId 11\n");
    memcpy( &RPC_memAddress, byteSrc, sizeof(unsigned int) );
    byteSrc += sizeof(unsigned int);
    memcpy( &RPC_length, byteSrc, sizeof(uint8_t) );
    byteSrc += sizeof(uint8_t);
    memcpy( &RPC_dereference, byteSrc, sizeof(bool) );
    RPC_returnVal = call RamSymbolsM_peek(  RPC_memAddress, RPC_length, RPC_dereference );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(ramSymbol_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( ramSymbol_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( ramSymbol_t )= %d\n", sizeof ( ramSymbol_t ));
  } break;

      /*** RamSymbolsM.poke ***/
  case 12: {
    unsigned int RPC_returnVal;
    ramSymbol_t RPC_symbol;
      dbg(DBG_USR2, "handling commandId 12\n");
    memcpy( &RPC_symbol, byteSrc, sizeof(ramSymbol_t) );
    RPC_returnVal = call RamSymbolsM_poke(  &RPC_symbol );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(unsigned int) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( unsigned int );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( unsigned int )= %d\n", sizeof ( unsigned int ));
  } break;

      /*** SNMSM.ledsOn ***/
  case 13: {
    result_t RPC_returnVal;
    uint8_t RPC_ledColorParam;
      dbg(DBG_USR2, "handling commandId 13\n");
    memcpy( &RPC_ledColorParam, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call SNMSM_ledsOn(  RPC_ledColorParam );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** SNMSM.restart ***/
  case 14: {
      dbg(DBG_USR2, "handling commandId 14\n");
    call SNMSM_restart( );
      dbg(DBG_USR2, "done calling the functions\n");
      dbg(DBG_USR2, "not packing void return value\n");
  } break;

      /*** SmartSensingM.SensingConfig.getADCChannel ***/
  case 15: {
    uint8_t RPC_returnVal;
    uint8_t RPC_type;
      dbg(DBG_USR2, "handling commandId 15\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.getADCChannel(  RPC_type );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint8_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint8_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint8_t )= %d\n", sizeof ( uint8_t ));
  } break;

      /*** SmartSensingM.SensingConfig.getDataPriority ***/
  case 16: {
    uint8_t RPC_returnVal;
    uint8_t RPC_type;
      dbg(DBG_USR2, "handling commandId 16\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.getDataPriority(  RPC_type );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint8_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint8_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint8_t )= %d\n", sizeof ( uint8_t ));
  } break;

      /*** SmartSensingM.SensingConfig.getNodePriority ***/
  case 17: {
    uint8_t RPC_returnVal;
      dbg(DBG_USR2, "handling commandId 17\n");
    RPC_returnVal = call SmartSensingM_SensingConfig.getNodePriority( );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint8_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint8_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint8_t )= %d\n", sizeof ( uint8_t ));
  } break;

      /*** SmartSensingM.SensingConfig.getSamplingRate ***/
  case 18: {
    uint16_t RPC_returnVal;
    uint8_t RPC_type;
      dbg(DBG_USR2, "handling commandId 18\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.getSamplingRate(  RPC_type );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint16_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint16_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint16_t )= %d\n", sizeof ( uint16_t ));
  } break;

      /*** SmartSensingM.SensingConfig.getTaskSchedulingCode ***/
  case 19: {
    uint16_t RPC_returnVal;
    uint8_t RPC_type;
      dbg(DBG_USR2, "handling commandId 19\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.getTaskSchedulingCode(  RPC_type );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(uint16_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( uint16_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( uint16_t )= %d\n", sizeof ( uint16_t ));
  } break;

      /*** SmartSensingM.SensingConfig.setADCChannel ***/
  case 20: {
    result_t RPC_returnVal;
    uint8_t RPC_type;
    uint8_t RPC_channel;
      dbg(DBG_USR2, "handling commandId 20\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    byteSrc += sizeof(uint8_t);
    memcpy( &RPC_channel, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.setADCChannel(  RPC_type, RPC_channel );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** SmartSensingM.SensingConfig.setDataPriority ***/
  case 21: {
    result_t RPC_returnVal;
    uint8_t RPC_type;
    uint8_t RPC_priority;
      dbg(DBG_USR2, "handling commandId 21\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    byteSrc += sizeof(uint8_t);
    memcpy( &RPC_priority, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.setDataPriority(  RPC_type, RPC_priority );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** SmartSensingM.SensingConfig.setNodePriority ***/
  case 22: {
    result_t RPC_returnVal;
    uint8_t RPC_priority;
      dbg(DBG_USR2, "handling commandId 22\n");
    memcpy( &RPC_priority, byteSrc, sizeof(uint8_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.setNodePriority(  RPC_priority );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** SmartSensingM.SensingConfig.setSamplingRate ***/
  case 23: {
    result_t RPC_returnVal;
    uint8_t RPC_type;
    uint16_t RPC_samplingRate;
      dbg(DBG_USR2, "handling commandId 23\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    byteSrc += sizeof(uint8_t);
    memcpy( &RPC_samplingRate, byteSrc, sizeof(uint16_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.setSamplingRate(  RPC_type, RPC_samplingRate );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

      /*** SmartSensingM.SensingConfig.setTaskSchedulingCode ***/
  case 24: {
    result_t RPC_returnVal;
    uint8_t RPC_type;
    uint16_t RPC_code;
      dbg(DBG_USR2, "handling commandId 24\n");
    memcpy( &RPC_type, byteSrc, sizeof(uint8_t) );
    byteSrc += sizeof(uint8_t);
    memcpy( &RPC_code, byteSrc, sizeof(uint16_t) );
    RPC_returnVal = call SmartSensingM_SensingConfig.setTaskSchedulingCode(  RPC_type, RPC_code );
    memcpy( &responseMsg->data[0], &RPC_returnVal, sizeof(result_t) );
      dbg(DBG_USR2, "done calling the functions\n");
    responseMsg->dataLength = sizeof ( result_t );
      dbg(DBG_USR2, "responseMsg->dataLength = %d\n", responseMsg->dataLength);
      dbg(DBG_USR2, " sizeof ( result_t )= %d\n", sizeof ( result_t ));
  } break;

    default:
        dbg(DBG_USR2, "found no rpc function\n");
      responseMsg->errorCode = RPC_PROCEDURE_UNAVAIL;
    }
}
	/*** now send the response message off if necessary ***/
    dbg(DBG_USR2, "errorCode=%i,dataLength=%i\n",responseMsg->errorCode, responseMsg->dataLength);
    dbg(DBG_USR2, "sizeof( RpcResponseMsg ) = %i, data-transactionID= %i\n",sizeof (RpcResponseMsg),((uint32_t)&(responseMsg->data[0]) - (uint32_t)&(responseMsg->transactionID)));

    //YFH: fill in the head of ApplicationMsg
	AppMsg->type = TYPE_SNMS_RPCRESPONSE;
	AppMsg->length =  responseMsg->dataLength + offsetof(RpcResponseMsg, data);
	AppMsg->seqno = seqno++;
	

    debug(DBG_SNMS, "send out response message\n", 0);
    
	
	if (msg->responseDesired == 0){
        dbg(DBG_USR2, "no response desired; not sending response message");
        processingCommand=FALSE;
    }
	else{
    // 6/3/2008 yang-
        processingCommand=FALSE;
        tryNextSend();
	}
/*    // commented by HRJ. Replace with tryNextSend();
 #ifndef USE_MULTIHOP_LQI
	else if (call ResponseSendMsg.send(msg->returnAddress,
				    responseMsg->dataLength + offsetof(RpcResponseMsg, data) + offsetof(ApplicationMsg, data),
				    sendMsgPtr) ){
        dbg(DBG_USR2, "sending response\n");
      // 9/20/2007 Yang-
		  //sendingResponse=TRUE;
        
    }
#else
	else if (call ResponseSend.send(sendMsgPtr, 
		            responseMsg->dataLength + offsetof(RpcResponseMsg,data) + offsetof(ApplicationMsg,data)) ){
		 //7/18/2007
         debug(DBG_SNMS,"sending response...\n", 0);
		 debug_msg(DBG_SNMS, sendMsgPtr);
    // 9/20/2007 Yang-
		//sendingResponse=TRUE;
        
    }
#endif
    else{
        dbg(DBG_USR2, "sending response failed\n");
         debug(DBG_SNMS,"sending response failed\n", 0);
        processingCommand=FALSE;
        
    }
    dbg(DBG_USR2, "done processing.\n");
    debug(DBG_SNMS,"done processing\n", 0);
*/
 }

  //YFH: modified to handle ApplicationMsg with payload as RpcCommandMsg
  event TOS_MsgPtr CommandReceive.receive(TOS_MsgPtr pMsg, void* payload, uint16_t payloadLength) {

	//RpcCommandMsg* msg = (RpcCommandMsg*)payload;
	NetworkMsg* nwMsg = (NetworkMsg*)(pMsg->data);
	ApplicationMsg* AMsg = (ApplicationMsg*)payload;
	RpcCommandMsg* msg = (RpcCommandMsg*)AMsg->data;
	
	
	debugSequenceNo = nwMsg->seqno;
	
	

    if (processingCommand == FALSE) {
      atomic processingCommand = TRUE;
      if (msg->address == TOS_LOCAL_ADDRESS || msg->address == TOS_BCAST_ADDR ) {
			memcpy(cmdStore.data, payload, payloadLength);
			cmdStoreLength = payloadLength;
			
			debugSequenceNo = nwMsg->seqno;
			
			if (SUCCESS != post processCommand()){
			   atomic processingCommand = FALSE;
			   debug(DBG_SNMS, "failed to post task\n",0);
			   return NULL;
			}
			else{
			   //debug(DBG_RPC, "CommandReceive.receivePostedUpper: 0 %i \n",  debugSequenceNo);
			   debug(DBG_SNMS, "posted task\n",0);
			}
		}
		else {
		   atomic processingCommand = FALSE;
		   debug(DBG_SNMS, "not posting task because not for me\n",0);
	    }
	}
	else {
		debug(DBG_SNMS, "command process task is busy\n",0);
		return NULL;
	}
	// -Yang
    return pMsg;
  }

// 6/3/2008 Yang-
/*
//2/5/2008 HRJ
  void tryNextSend() {
    debug(DBG_SNMS, "tryNextSend\n", 0);
    atomic{
     if (!taskBusy&&processingCommand) {
        if (post sendResponse() != SUCCESS){
          taskBusy = FALSE;
		  processingCommand = FALSE;
        }
        else{
          taskBusy = TRUE;
        }
     }
   }
     return;
 }

 task void sendResponse() {
	//ApplicationMsg* RecvMsg = (ApplicationMsg*)cmdStore.data;
	//RpcCommandMsg* msg = (RpcCommandMsg*)RecvMsg->data;
	//uint8_t* byteSrc = msg->data;
    uint16_t maxLength;
    //uint16_t id = msg->commandID;
    ApplicationMsg *AppMsg = (ApplicationMsg*)call ResponseSend.getBuffer(sendMsgPtr, &maxLength);
    RpcResponseMsg *responseMsg = (RpcResponseMsg*)AppMsg->data;
    atomic taskBusy = FALSE; 
 #ifndef USE_MULTIHOP_LQI
	if (call ResponseSendMsg.send(msg->returnAddress,
				    responseMsg->dataLength + offsetof(RpcResponseMsg, data) + offsetof(ApplicationMsg, data),
				    sendMsgPtr) ){
        dbg(DBG_USR2, "sending response\n");
        
    }
#else
	if (call ResponseSend.send(sendMsgPtr, 
		            responseMsg->dataLength + offsetof(RpcResponseMsg,data) + offsetof(ApplicationMsg,data)) ){
		 //7/18/2007
         debug(DBG_SNMS,"sending response...\n", 0);
		 debug_msg(DBG_SNMS, sendMsgPtr);
        
    }
#endif
    else{
        debug(DBG_SNMS,"sending response failed, retry again\n", 0);
		tryNextSend();
        
    }
  }
//--HRJ
*/

  void tryNextSend() {
     if (TRUE != taskBusy) {
       taskBusy = post sendResponse();
     }
     return;
 }

 task void sendResponse() {
    uint16_t maxLength;
    ApplicationMsg *AppMsg = (ApplicationMsg*)call ResponseSend.getBuffer(sendMsgPtr, &maxLength);
    RpcResponseMsg *responseMsg = (RpcResponseMsg*)AppMsg->data;
 #ifndef USE_MULTIHOP_LQI
	if (call ResponseSendMsg.send(msg->returnAddress,
				    responseMsg->dataLength + offsetof(RpcResponseMsg, data) + offsetof(ApplicationMsg, data),
				    sendMsgPtr) ){
        dbg(DBG_USR2, "sending response\n");
        atomic taskBusy = FALSE;
    }
#else
	if (call ResponseSend.send(sendMsgPtr, 
		            responseMsg->dataLength + offsetof(RpcResponseMsg,data) + offsetof(ApplicationMsg,data)) ){
         debug(DBG_SNMS,"sending response...\n", 0);
        atomic taskBusy = FALSE;
    }
#endif
    else{
      atomic taskBusy = FALSE;
      debug(DBG_SNMS,"sending response failed, retry again\n", 0);
      tryNextSend();
      
    }
  }
// -Yang

 #ifndef USE_MULTIHOP_LQI
  event result_t ResponseSend.sendDone(TOS_MsgPtr pMsg, result_t success) {
    dbg(DBG_USR2, "wtf!!  drainSend send done\n");
    return SUCCESS;
  }

  event result_t ResponseSendMsg.sendDone(TOS_MsgPtr pMsg, result_t success) {
    if (success == SUCCESS) {
      dbg(DBG_USR2, "drain send done: SUCCESS\n");
    }
    else{
      dbg(DBG_USR2, "drain send done: FAIL\n");
    }
    // 6/3/2008 Yang-
    //processingCommand = FALSE;
    return SUCCESS;
  }
#else
  event result_t ResponseSend.sendDone(TOS_MsgPtr pMsg, result_t success) {
    //dbg(DBG_USR2, "wtf!!  drainSend send done\n");
    //7/18/2007
	debug(DBG_SNMS, "senddone response message, length=\n", pMsg->length);
	//debug_msg(DBG_ERR, pMsg);
// 6/3/2008 Yang
//processingCommand = FALSE;
    return SUCCESS;
  }
#endif



}
