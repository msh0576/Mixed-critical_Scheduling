

module ScheduleConfigC {
  provides {
    interface ScheduleConfig;
  }
}
implementation {

  /*
  * We should change the index of the backup_topology, when we change the network topology
  * 0: No-backup node,  N: backup nodeid is N
  */
  uint8_t backup_topology[NETWORK_NODE]={0, 52, 51};

  /*
  * the index of flow_criticality[] indicate flow id
  * the value of each index means flow criticality`
  * 1: Hi-criti,  0:Lo-criti
  */
  uint8_t flow_criticality[NETWORK_FLOW]={0, 1, 0};

  // The index of nodeid of backup_topology[] is the backup node
  async command uint8_t ScheduleConfig.backupNode(uint8_t nodeid) {
    if(nodeid > NETWORK_NODE || nodeid < 0) {  //check whether nodeide is bounded in NETWORK_NODE
      return 0;
    }else {
      return backup_topology[nodeid];
    }
  }

  async command uint8_t ScheduleConfig.criticality(uint8_t flowid) {
    if(flowid > NETWORK_FLOW || flowid < 0) { //check flowid is bounded
      return 0;
    }else {
      return flow_criticality[flowid];
    }
  }




}
