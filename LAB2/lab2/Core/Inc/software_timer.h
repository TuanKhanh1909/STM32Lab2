/*
 * software_timer.h
 *
 *  Created on: Sep 12, 2025
 *      Author: khanh
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer0_flag;

void setTimer1(int duration);
void setTimer0(int duration);
void timer_run();

#endif /* INC_SOFTWARE_TIMER_H_ */
