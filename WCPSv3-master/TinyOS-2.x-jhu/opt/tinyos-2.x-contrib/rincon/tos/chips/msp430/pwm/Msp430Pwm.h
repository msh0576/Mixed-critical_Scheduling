
#ifndef PWM_H
#define PWM_H

enum timer_outmode_enum {
  MSP430TIMER_OUTMODE_OUTPUT = 0,
  MSP430TIMER_OUTMODE_SET = 1,
  MSP430TIMER_OUTMODE_TOGGLERESET = 2,
  MSP430TIMER_OUTMODE_SETRESET = 3,
  MSP430TIMER_OUTMODE_TOGGLE = 4,
  MSP430TIMER_OUTMODE_RESET = 5,
  MSP430TIMER_OUTMODE_TOGGLESET = 6,
  MSP430TIMER_OUTMODE_RESETSET = 7,
};


#endif

