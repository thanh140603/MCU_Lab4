/*
 * global.h
 *
 *  Created on: Nov 11, 2023
 *      Author: ad
 */

#ifndef GLOBAL_H_
#define GLOBAL_H_
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include "software_timer.h"
#define MAX_BUFFER_SIZE		30

extern ADC_HandleTypeDef hadc1;

extern UART_HandleTypeDef huart2;

extern uint8_t temp;
extern uint8_t buffer[MAX_BUFFER_SIZE];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;
extern uint8_t command_data[MAX_BUFFER_SIZE];
extern uint8_t res_syntax[MAX_BUFFER_SIZE];
#endif /* GLOBAL_H_ */
