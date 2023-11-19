/*
 * software_timer.c
 *
 *  Created on: Nov 13, 2023
 *      Author: ad
 */
#include "software_timer.h"

int timer_counter0 = 0;
int timer_flag0 = 0;
int timer_counter1 = 0;
int timer_flag1 = 0;

void setTimer0(int duration){
	timer_counter0 = duration;
	timer_flag0 = 0;
}
void setTimer1(int duration){
	timer_counter1 = duration;
	timer_flag1 = 0;
}
void timerRun0(){
	if(timer_counter0 > 0){
		timer_counter0--;
		if(timer_counter0 <= 0){
			timer_flag0 = 1;
		}
	}
}
void timerRun1(){
	if(timer_counter1 > 0){
		timer_counter1--;
		if(timer_counter1 <= 0){
			timer_flag1 = 1;
		}
	}
}
