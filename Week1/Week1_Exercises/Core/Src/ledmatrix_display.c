/*
 * ledmatrix_display.c
 *
 *  Created on: Sep 23, 2021
 *      Author: DELL
 */

#include "main.h"
#include "ledmatrix_display.h"


#define NUMBER_OF_LEDS	12
#define Clk_delay	1000

static uint8_t ledmatrixVals[NUMBER_OF_LEDS]={0};
static uint8_t seconds=0;
static uint8_t minutes=0;
static uint8_t hours=0;

void update_led_matrix_buffer(void){
	HAL_GPIO_WritePin(ALL_PORTS, LED_1_Pin, ledmatrixVals[0]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_2_Pin, ledmatrixVals[1]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_3_Pin, ledmatrixVals[2]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_4_Pin, ledmatrixVals[3]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_5_Pin, ledmatrixVals[4]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_6_Pin, ledmatrixVals[5]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_7_Pin, ledmatrixVals[6]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_8_Pin, ledmatrixVals[7]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_9_Pin, ledmatrixVals[8]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_10_Pin, ledmatrixVals[9]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_11_Pin, ledmatrixVals[10]);
	HAL_GPIO_WritePin(ALL_PORTS, LED_12_Pin, ledmatrixVals[11]);
}

// Exercise 6
void setAllClock(void){
	for(int i = 0; i < NUMBER_OF_LEDS; i++){
		ledmatrixVals[i]=1;
	}
	update_led_matrix_buffer();
}

// Exercise 7
void clearAllClock(void){
	for(int i = 0; i < NUMBER_OF_LEDS; i++){
		ledmatrixVals[i]=0;
	}
	update_led_matrix_buffer();
}

// Exercise 8
void setNumberOnClock(int num){
//	clearAllClock();
	ledmatrixVals[num]=1;
	update_led_matrix_buffer();
}
void checksetNOC(void){
	for(int i = 0; i < NUMBER_OF_LEDS; i++){
		setNumberOnClock(i);
		HAL_Delay(1000);
	}
}

// Exercise 9
void clearNumberOnClock(int num){
//	setAllClock();
	ledmatrixVals[num]=0;
	update_led_matrix_buffer();
}
void checkclearNOC(void){
	for(int i = 0; i < NUMBER_OF_LEDS; i++){
		clearNumberOnClock(i);
		HAL_Delay(1000);
	}
}

// Exercise 10
void runClock(void){
	ledmatrixVals[seconds] = 1;
	ledmatrixVals[minutes] = 1;
	ledmatrixVals[hours] = 1;
	update_led_matrix_buffer();
	HAL_Delay(Clk_delay);

	while(1){
		clearAllClock();

		seconds++;
		if(seconds > 11) {
			seconds = 0;
			minutes++;
		}
		if(minutes > 11) {
			minutes = 0;
			hours++;
		}
		if(hours > 11) {
			hours = 0;
		}

		ledmatrixVals[seconds] = 1;
		ledmatrixVals[minutes] = 1;
		ledmatrixVals[hours] = 1;

		update_led_matrix_buffer();
		HAL_Delay(Clk_delay);
	}
}
