/*
 * ledmatrix_display.c
 *
 *  Created on: Sep 23, 2021
 *      Author: DELL
 */

#include "main.h"
#include "ledmatrix_display.h"


#define NUMBER_OF_LEDS	12

static uint8_t ledmatrixVals[NUMBER_OF_LEDS]={0};

void update_led_matrix_buffer(void){
	for(int i = 0; i < NUMBER_OF_LEDS; i++){
		HAL_GPIO_WritePin(ALL_PORTS, LED_1_Pin|LED_2_Pin|LED_3_Pin|LED_4_Pin|LED_5_Pin|LED_6_Pin|LED_7_Pin|LED_8_Pin|LED_9_Pin|LED_10_Pin|LED_11_Pin|LED_12_Pin, ledmatrixVals[i]);
	}
}

void setAllClock(void){
	for(int i = 0; i < NUMBER_OF_LEDS; i++){
		ledmatrixVals[i]=1;
	}
	update_led_matrix_buffer();
}

void clearAllClock(void){
	for(int i = 0; i < NUMBER_OF_LEDS; i++){
		ledmatrixVals[i]=0;
	}
	update_led_matrix_buffer();
}
