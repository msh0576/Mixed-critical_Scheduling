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
 * Implementation of all of the basic TOSSIM primitives and utility
 * functions.
 *
 * @author Philip Levis
 * @date   Nov 22 2005
 */

// $Id$
#include <sim_tossim.h>
#include <sim_event_queue.h>
#include <sim_mote.h>
#include <stdlib.h>
#include <sys/time.h>

#include <sim_noise.h> //added by HyungJune Lee
#include "/home/sihoon/WCPSv3-master/Sihoon_ex2/TestNetwork.h"  //added by sihoon

static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char* varname, uintptr_t* addr, size_t* size);

void sim_init() __attribute__ ((C, spontaneous)) {
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init(); //added by HyungJune Lee

  {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    // Need to make sure we don't pass zero to seed simulation.
    // But in case some weird timing factor causes usec to always
    // be zero, default to tv_sec. Note that the explicit
    // seeding call also has a check for zero. Thanks to Konrad
    // Iwanicki for finding this. -pal
    if (tv.tv_usec != 0) {
      sim_random_seed(tv.tv_usec);
    }
    else {
      sim_random_seed(tv.tv_sec);
    }
  }
}

void sim_end() __attribute__ ((C, spontaneous)) {
  sim_queue_init();
}



int sim_random() __attribute__ ((C, spontaneous)) {
  uint32_t mlcg,p,q;
  uint64_t tmpseed;
  tmpseed =  (uint64_t)33614U * (uint64_t)sim_seed;
  q = tmpseed;    /* low */
  q = q >> 1;
  p = tmpseed >> 32 ;             /* hi */
  mlcg = p + q;
  if (mlcg & 0x80000000) {
    mlcg = mlcg & 0x7FFFFFFF;
    mlcg++;
  }
  sim_seed = mlcg;
  return mlcg;
}

void sim_random_seed(int seed) __attribute__ ((C, spontaneous)) {
  // A seed of zero wedges on zero, so use 1 instead.
  if (seed == 0) {
    seed = 1;
  }
  sim_seed = seed;
}

sim_time_t sim_time() __attribute__ ((C, spontaneous)) {
  return sim_ticks;
}
void sim_set_time(sim_time_t t) __attribute__ ((C, spontaneous)) {
  sim_ticks = t;
}

sim_time_t sim_ticks_per_sec() __attribute__ ((C, spontaneous)) {
  return 10000000000ULL;
}

unsigned long sim_node() __attribute__ ((C, spontaneous)) {
  return current_node;
}
void sim_set_node(unsigned long node) __attribute__ ((C, spontaneous)) {
  current_node = node;
  TOS_NODE_ID = node;
}

/*bool sim_run_next_event() __attribute__ ((C, spontaneous)) {
  bool result = FALSE;
  if (!sim_queue_is_empty()) {
    sim_event_t* event = sim_queue_pop();
    sim_set_time(event->time);
    sim_set_node(event->mote);

    // Need to test whether function pointers are for statically
    // allocted events that are zeroed out on reboot
    dbg("Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
    if ((sim_mote_is_on(event->mote) || event->force) &&
	event->handle != NULL) {
      result = TRUE;
      dbg_clear("Tossim", " mote is on (or forced event), run it.\n");
      event->handle(event);
    }
    else {
      dbg_clear("Tossim", "\n");
    }
    if (event->cleanup != NULL) {
      event->cleanup(event);
    }
  }

  return result;
}*/
//commented out by Bo, because we need this funtion to give feedback regarding the tcpMsg pool in SimMote
//tcpMsg pool basic is a buffer for execution status of packet receptions on the end-sensor
// we need to return as an array or string to the TcpServer python script

//Added by Bo to meet the goal written as above
int sim_run_next_event() __attribute__ ((C, spontaneous)) {
  //int tcpMsg_result[5];
  int* tcpMsg_result;
  int result_to_py = 0;

  if (!sim_queue_is_empty()) {
    sim_event_t* event = sim_queue_pop();
    sim_set_time(event->time);
    sim_set_node(event->mote);

    //we scan through END RECEIVERS [161, 169, SENSING] [157, 180, 108, 175: ACTUATORS]
    //or we read from everybody to see if we get something
    //to read the tcp buffer and see if we have any news updated

    if ((sim_mote_is_on(event->mote) || event->force) && event->handle != NULL) {
      //printf("Mote: %u is on.\n", event->mote);
      event->handle(event);

      if (event->mote == 51 || event->mote == 52 )  // added by sihoon
      {
      	tcpMsg_result = sim_mote_getTcpMsg(event->mote);
      	//printf("SENSOR: %u, GOT TCP_MSG: %i, %i, %i, %i, %i\n", event->mote, tcpMsg_result[0], tcpMsg_result[1], tcpMsg_result[2], tcpMsg_result[3], tcpMsg_result[4]);
      	if (tcpMsg_result[0] == 0 && tcpMsg_result[1] == 0 && tcpMsg_result[2] == 0 && tcpMsg_result[3] == 0 && tcpMsg_result[4] == 0)
        {
      	//printf("SENSOR: %i, NOTHING received.\n", event->mote);
      	}
      	else
        {
          //printf("SENSOR: %i, FLOW: %i\n", event->mote, tcpMsg_result[0]);
      		result_to_py |= (1u << tcpMsg_result[0]); // set the specific bit to 1 if the ith flow has arrived to the gateway
      		sim_mote_setTcpMsg(event->mote, 0, 0, 0, 0, 0);
      	}
      }
    }
    else {
    }
    if (event->cleanup != NULL) {
      event->cleanup(event);
    }
  }
  //return 0;
  return result_to_py;
}

int sim_print_time(char* buf, int len, sim_time_t ftime) __attribute__ ((C, spontaneous)) {
  int hours;
  int minutes;
  int seconds;
  sim_time_t  secondBillionths;

  secondBillionths = (ftime % sim_ticks_per_sec());
  if (sim_ticks_per_sec() > (sim_time_t)1000000000) {
    secondBillionths /= (sim_ticks_per_sec() / (sim_time_t)1000000000);
  }
  else {
    secondBillionths *= ((sim_time_t)1000000000 / sim_ticks_per_sec());
  }

  seconds = (int)(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len-1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

int sim_print_now(char* buf, int len) __attribute__ ((C, spontaneous)) {
  return sim_print_time(buf, len, sim_time());
}

char simTimeBuf[128];
char* sim_time_string() __attribute__ ((C, spontaneous)) {
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

void sim_add_channel(char* channel, FILE* file) __attribute__ ((C, spontaneous)) {
  sim_log_add_channel(channel, file);
}

bool sim_remove_channel(char* channel, FILE* file)  __attribute__ ((C, spontaneous)) {
  return sim_log_remove_channel(channel, file);
}

//added by sihoon
// Python to MAC
int simScheduleBuf[NETWORK_NODE][VCS_COL_SIZE];
//int *simScheduleBuf;
void sim_send_VirtualSchedule(int nodeid, int TxOffset, int dummy1, int dummy2 ) __attribute__ ((C, spontaneous)) {
  if(nodeid <= NETWORK_NODE){
    simScheduleBuf[nodeid][0] = TxOffset;
  }

}

int* sim_get_VirtualSchedule() __attribute__ ((C, spontaneous)) {

  return simScheduleBuf;
}

int simTaskPeriodBuf[NETWORK_FLOW];
void sim_send_TaskPeriods(int Task1_T, int Task2_T, int Task3_T, int Task4_T) __attribute__ ((C, spontaneous)) {
  uint8_t i;

  for(i=0; i<NETWORK_FLOW; i++){

    switch(i){
      case 0 :
        simTaskPeriodBuf[i] = Task1_T;
        break;
      case 1 :
        simTaskPeriodBuf[i] = Task2_T;
        break;
      case 2 :
        simTaskPeriodBuf[i] = Task3_T;
        break;
      case 3 :
        simTaskPeriodBuf[i] = Task4_T;
        break;
      default :
        simTaskPeriodBuf[i] = 0;
    }

  }

}

int* sim_get_TaskPeriods() __attribute__ ((C, spontaneous)) {

  return simTaskPeriodBuf;
}

int simTaskTx[4];
void sim_send_NumTx(int Task1_Tx, int Task2_Tx, int Task3_Tx, int Task4_Tx) __attribute__ ((C, spontaneous)) {
  uint8_t i;

  for(i=0; i<4; i++){

    switch(i){
      case 0 :
        simTaskTx[i] = Task1_Tx;
        break;
      case 1 :
        simTaskTx[i] = Task2_Tx;
        break;
      case 2 :
        simTaskTx[i] = Task3_Tx;
        break;
      case 3 :
        simTaskTx[i] = Task4_Tx;
        break;
      default :
        simTaskTx[i] = 0;
    }

  }

}

int* sim_get_TaskTx() __attribute__ ((C, spontaneous)) {

  return simTaskTx;
}
