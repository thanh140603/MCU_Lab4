/*
 * software_timer.h
 *
 *  Created on: Nov 13, 2023
 *      Author: ad
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

#define TIMER_CYCLE		10

extern int timer_flag0;
extern int timer_flag1;

void setTimer0(int duration);
void setTimer1(int duration);
void timerRun0();
void timerRun1();

#endif /* INC_SOFTWARE_TIMER_H_ */
