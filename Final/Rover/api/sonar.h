/*
 * sonar.h
 *
 *  Created on: Nov 8, 2016
 *      Author: nicks1
 */

#ifndef SONAR_H_
#define SONAR_H_

#include <stdbool.h>
#include "driverlib/interrupt.h"

#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <inc/tm4c123gh6pm.h>

volatile unsigned rising_time; // start time of the return pulse
volatile unsigned falling_time; // end time of the return pulse
int count = 0;

void sonar_timer_init();

void TIMER3B_Handler(void);

unsigned sonar_read();

unsigned ping_read();

void send_pulse();

#endif /* SONAR_H_ */
