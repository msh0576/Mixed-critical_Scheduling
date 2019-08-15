// $Id$
/*									tab:4
 * "Copyright (c) 2004-5 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2004-5 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

/** 
  * The interface to a TinyOS task scheduler.
  *
  * @author Philip Levis
  * @author Kevin Klues <klueska@cs.stanford.edu>
  * @date   January 19 2005
  * @see TEP 106: Tasks and Schedulers
  * @see TEP 107: Boot Sequence
  */ 


interface TaskScheduler {

  /** 
   * Initialize the scheduler.
   */
  command void init();

  /** 
    * Run the next task if one is waiting, otherwise return immediately. 
    *
    * @return        whether a task was run -- TRUE indicates a task
    *                ran, FALSE indicates there was no task to run.
    */
  command bool runNextTask();
  
  /** 
    * Check to see if there are any pending tasks in the task queue. 
    *
    * @return        whether there are any tasks waiting to run
    */
  async command bool hasTasks();

  /**
   * Enter an infinite task-running loop. Put the MCU into a low power
   * state when the processor is idle (task queue empty, waiting for
   * interrupts). This call never returns.
   */
  command void taskLoop();
}

