/*
 * Copyright (c) 2009, Vanderbilt University
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE VANDERBILT UNIVERSITY BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE VANDERBILT
 * UNIVERSITY HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE VANDERBILT UNIVERSITY SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE VANDERBILT UNIVERSITY HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Author: Janos Sallai
 */

#if defined(DFRF_32KHZ)
#define TDfrf T32khz
#else
#define TDfrf TMilli
#endif

configuration DfrfEngineC {
  provides {
    interface DfrfControl[uint8_t appId];
    interface DfrfSendAny as DfrfSend[uint8_t appId];
    interface DfrfReceiveAny as DfrfReceive[uint8_t appId];
  }
  uses {
    interface DfrfPolicy[uint8_t appId];
  }
} implementation {

  components MainC, DfrfEngineP as Engine, TimeSyncMessageC, new TimerMilliC() as Timer, new TimerMilliC() as DfrfTimer, NoLedsC as LedsC, NoLedsC;

  DfrfSend = Engine.DfrfSend;
  DfrfReceive = Engine.DfrfReceive;

  Engine.DfrfControl = DfrfControl;
  Engine.DfrfPolicy = DfrfPolicy;
  Engine.Packet -> TimeSyncMessageC;
  Engine.Leds -> LedsC;

  Engine.Receive -> TimeSyncMessageC.Receive[AM_DFRF_MSG];
  Engine.Timer -> DfrfTimer;

#if defined(DFRF_32KHZ)
  components LocalTime32khzC as LocalTimeProviderC;
  Engine.LocalTime -> LocalTimeProviderC;
  Engine.TimeSyncAMSend -> TimeSyncMessageC.TimeSyncAMSend32khz[AM_DFRF_MSG];
  Engine.TimeSyncPacket -> TimeSyncMessageC.TimeSyncPacket32khz;
#else
  components HilTimerMilliC;
  Engine.LocalTime -> HilTimerMilliC;
  Engine.TimeSyncAMSend -> TimeSyncMessageC.TimeSyncAMSendMilli[AM_DFRF_MSG];
  Engine.TimeSyncPacket -> TimeSyncMessageC.TimeSyncPacketMilli;
#endif

}

