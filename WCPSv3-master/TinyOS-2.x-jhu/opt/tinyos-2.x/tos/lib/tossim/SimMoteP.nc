/*
 * "Copyright (c) 2005 Stanford University. All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and
 * its documentation for any purpose, without fee, and without written
 * agreement is hereby granted, provided that the above copyright
 * notice, the following two paragraphs and the author appear in all
 * copies of this software.
 *
 * IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF STANFORD UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * STANFORD UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE
 * PROVIDED HEREUNDER IS ON AN "AS IS" BASIS, AND STANFORD UNIVERSITY
 * HAS NO OBLIGATION TO PROVIDE MAINTENANCE, SUPPORT, UPDATES,
 * ENHANCEMENTS, OR MODIFICATIONS."
 */


/**
 * The TOSSIM abstraction of a mote. By putting simulation state into
 * a component, we can scale and reference this state automatically
 * using nesC's rewriting, rather than managing and indexing into
 * arrays manually.
 *
 * @author Phil Levis
 * @date   August 19 2005
 */

// $Id$

#include "CC2420.h"

module SimMoteP {
  provides interface SimMote;
}

implementation {


  long long int euid;
  long long int startTime;
  bool isOn;

  bool isIdle; //added by Bo

  sim_event_t* bootEvent;

  /*The code below we try to add a tcp msg buffer and
  get/set functions as a basis for feedback from tossim to tcp server*/

  uint8_t radioChannel = CC2420_DEF_CHANNEL;   // Current node channel
  int tcp_msg[5]; //tcp msg buffer, added by Bo

  int radio_power = 0; //added by Sihoon

  /**
   * Sets current node radio channel
   */
  command error_t SimMote.setRadioChannel(uint8_t newRadioChannel)
  {
    if (newRadioChannel >= 11 && newRadioChannel <= 26) {
      radioChannel = newRadioChannel;
      return SUCCESS;
    }

    return FAIL;
  }

  /**
   * Gets current node radio channel
   */
  async command uint8_t SimMote.getRadioChannel()
  {
    if (radioChannel < 11 || radioChannel > 26) {
      return CC2420_DEF_CHANNEL;
    }

    return radioChannel;
  }

  /**
   * Sets current node radio channel
   */
  error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel) __attribute__ ((C, spontaneous)) {
    error_t result;
    int tmp = sim_node();
    sim_set_node(mote);
    result = call SimMote.setRadioChannel(newRadioChannel);
    sim_set_node(tmp);
    return result;
  }

  /**
   * Gets current node radio channel
   */
  uint8_t sim_mote_get_radio_channel(int mote) __attribute__ ((C, spontaneous)) {
    uint8_t result;
    int tmp = sim_node();
    sim_set_node(mote);
    result = call SimMote.getRadioChannel();
    sim_set_node(tmp);
    return result;
  }

  async command long long int SimMote.getEuid() {
    return euid;
  }
  async command void SimMote.setEuid(long long int e) {
    euid = e;
  }
  async command long long int SimMote.getStartTime() {
    return startTime;
  }
  async command bool SimMote.isOn() {
    return isOn;
  }

  async command int SimMote.getVariableInfo(char* name, void** addr, size_t* size) {
    return __nesc_nido_resolve(sim_node(), name, (uintptr_t*)addr, (size_t*)size);
  }

  command void SimMote.turnOn() {
    if (!isOn) {
      if (bootEvent != NULL) {
	bootEvent->cancelled = TRUE;
      }
      __nesc_nido_initialise(sim_node());
      startTime = sim_time();
      dbg("SimMoteP", "Setting start time to %llu\n", startTime);
      isOn = TRUE;
      sim_main_start_mote();
    }
  }

  async command void SimMote.turnOff() {
    isOn = FALSE;
  }


  long long int sim_mote_euid(int mote) @C() @spontaneous() {
    long long int result;
    int tmp = sim_node();
    sim_set_node(mote);
    result = call SimMote.getEuid();
    sim_set_node(tmp);
    return result;
  }

  void sim_mote_set_euid(int mote, long long int id)  @C() @spontaneous() {
    int tmp = sim_node();
    sim_set_node(mote);
    call SimMote.setEuid(id);
    sim_set_node(tmp);
  }

  long long int sim_mote_start_time(int mote) @C() @spontaneous() {
    long long int result;
    int tmp = sim_node();
    sim_set_node(mote);
    result = call SimMote.getStartTime();
    sim_set_node(tmp);
    return result;
  }

  int sim_mote_get_variable_info(int mote, char* name, void** ptr, size_t* len) @C() @spontaneous() {
    int result;
    int tmpID = sim_node();
    sim_set_node(mote);
    result = call SimMote.getVariableInfo(name, ptr, len);
    dbg("SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
    sim_set_node(tmpID);
    return result;
  }

  void sim_mote_set_start_time(int mote, long long int t) @C() @spontaneous() {
    int tmpID = sim_node();
    sim_set_node(mote);
    startTime = t;
    dbg("SimMoteP", "Setting start time to %llu\n", startTime);
    sim_set_node(tmpID);
    return;
  }

  bool sim_mote_is_on(int mote) @C() @spontaneous() {
    bool result;
    int tmp = sim_node();
    sim_set_node(mote);
    result = call SimMote.isOn();
    //dbg("SimMoteP", " sim_mote_is_on(int mote)  touched by Bo\n");
    sim_set_node(tmp);
    return result;
  }

  void sim_mote_turn_on(int mote) @C() @spontaneous() {
    int tmp = sim_node();
    sim_set_node(mote);
    call SimMote.turnOn();
    sim_set_node(tmp);
  }

  void sim_mote_turn_off(int mote) @C() @spontaneous() {
    int tmp = sim_node();
    sim_set_node(mote);
    call SimMote.turnOff();
    //dbg("SimMoteP", " sim_mote_turn_off touched by Bo\n");
    sim_set_node(tmp);
  }

  void sim_mote_boot_handle(sim_event_t* e) {
    char buf[128];
    sim_print_now(buf, 128);

    bootEvent = (sim_event_t*)NULL;
    dbg("SimMoteP", "Turning on mote %i at time %s.\n", (int)sim_node(), buf);
    call SimMote.turnOn();
  }

  void sim_mote_enqueue_boot_event(int mote) @C() @spontaneous() {
    int tmp = sim_node();
    sim_set_node(mote);

    if (bootEvent != NULL)  {
      if (bootEvent->time == startTime) {
	// In case we have a cancelled boot event.
	bootEvent->cancelled = FALSE;
	return;
      }
      else {
	bootEvent->cancelled = TRUE;
      }
    }

    bootEvent = (sim_event_t*) malloc(sizeof(sim_event_t));
    bootEvent->time = startTime;
    bootEvent->mote = mote;
    bootEvent->force = TRUE;
    bootEvent->data = NULL;
    bootEvent->handle = sim_mote_boot_handle;
    bootEvent->cleanup = sim_queue_cleanup_event;
    sim_queue_insert(bootEvent);

    sim_set_node(tmp);
  }

  //added Bo, we encapsulate the set/get methods of the SimMote interface for easy use in
  //sim_tossim.h nad sim_tossim.c, which updates the tcpMsg during runNextEvent

  int* sim_mote_getTcpMsg(int mote) @C() @spontaneous() {
  	int* tcpMsgg; //2gs in tcpMsgg to avoid misunderstandings with the global tcpMsg in this file
  	int tmp = sim_node();
    sim_set_node(mote);
  	tcpMsgg = call SimMote.getTcpMsg();
  	sim_set_node(tmp);
  	return tcpMsgg;
  }

  void sim_mote_setTcpMsg(int mote, int flow_id, int slot_id, int source_id, int node_id, int channel_id) @C() @spontaneous(){
  	int tmp = sim_node();
    sim_set_node(mote);
  	call SimMote.setTcpMsg(flow_id, slot_id, source_id, node_id, channel_id);
  	sim_set_node(tmp);
  }

  //added by Bo, for the tcp msg buffer write/read access
  //The idea is to have TcpMsg as a global variable and we can update it
  //Meantime, the runNextEvent will be able to retrive the msg status and return/
  //to the Tcp Server
  async command int* SimMote.getTcpMsg(){
  	return tcp_msg;
  }

  async command void SimMote.setTcpMsg(int flow_id, int slot_id, int source_id, int node_id, int channel_id){
  	tcp_msg[0]= flow_id;
    tcp_msg[1]= slot_id;
    tcp_msg[2]= source_id;
    tcp_msg[3]= node_id;
    tcp_msg[4]= channel_id;
    //printf("SENSOR: %u, values in tcp_msg set as: flow_id: %u, slot_id: %u, source_id: %u, node_id: %u, channel_id: %u\n", TOS_NODE_ID, flow_id, slot_id, source_id, node_id, channel_id);
  }

  //enable/disable idle; while idle, the sensor cancels all sending; added by Bo
  async command bool SimMote.isIdle() {
    return isIdle;
  }

  command void SimMote.disableIdle() {
  	isIdle = FALSE;
  }

  async command void SimMote.enableIdle() {
    isIdle = TRUE;
  }

  bool sim_mote_is_idle(int mote) @C() @spontaneous() {
    bool result;
    int tmp = sim_node();
    sim_set_node(mote);
    result = call SimMote.isIdle();
    sim_set_node(tmp);
    return result;
  }

  void sim_mote_enable_idle(int mote) @C() @spontaneous() {
    int tmp = sim_node();
    sim_set_node(mote);
    call SimMote.enableIdle();
    sim_set_node(tmp);
  }

  void sim_mote_disable_idle(int mote) @C() @spontaneous() {
    int tmp = sim_node();
    sim_set_node(mote);
    call SimMote.disableIdle();
    sim_set_node(tmp);
  }

  /*
  * Added by sihoon
  */
  command error_t SimMote.set_power(uint8_t power) {

    if(power <= 0) {
      radio_power = 0;
      dbg("SimMote_power","radio_power:%d\n",radio_power);
      return SUCCESS;
    }
    else if(power >= 31) {
      radio_power = 31;
      dbg("SimMote_power","radio_power:%d\n",radio_power);
      return SUCCESS;
    }
    else {
      radio_power = power;
      dbg("SimMote_power","radio_power:%d\n",radio_power);
      return SUCCESS;
    }

    return FAIL;
  }

  async command uint8_t SimMote.get_power() {
    return radio_power;
  }

  /*
  added by Sihoon, we encapsulate the set/get methods of the SimMote interface for easy use in
  sim_gain.c, which update the radio_power during add() in tossim
  */
  uint8_t sim_mote_getPower(int mote) @C() @spontaneous() {
  	int tmpPower;
  	int tmp = sim_node();
    sim_set_node(mote);
  	tmpPower = call SimMote.get_power();
  	sim_set_node(tmp);
  	return tmpPower;
  }

  error_t sim_mote_setPower(int mote, uint8_t power) @C() @spontaneous(){
    error_t result;
    int tmp = sim_node();
    sim_set_node(mote);
  	call SimMote.set_power(power);
  	sim_set_node(tmp);
    return result;
  }
}
