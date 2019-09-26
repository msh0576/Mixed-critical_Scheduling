
interface ScheduleConfig {

  async command uint8_t primaryNode(uint8_t flowid, uint8_t nodeid);

  async command uint8_t backupNode(uint8_t flowid, uint8_t nodeid);

  async command uint8_t criticality(uint8_t flowid);

  async command void VCS();


}
