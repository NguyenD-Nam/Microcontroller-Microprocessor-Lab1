/*
 * led_display.c
 *
 * used for Ex4 and Ex5
 *
 *  Created on: Sep 23, 2021
 *      Author: DELL
 */

//#include "main.h"
//#include "led_display.h"
//
//#define NUMBER_OF_DECIMAL_DIGITS			10
//#define	NUMBER_OF_SEVEN_SEGMENT_LEDS		1
//
//static uint8_t sevenSegmentLEDConversion[NUMBER_OF_DECIMAL_DIGITS] = {0x3f, 0x6, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x7, 0x7f, 0x6f};
//static uint8_t sevenSegmentLEDBuffer;
//uint8_t update_seven_segment_led_buffer(uint8_t val){
//	if(val > NUMBER_OF_DECIMAL_DIGITS) return 0;
//	sevenSegmentLEDBuffer = val;
//	return 1;
//}
//void seven_segment_led_driver(void){
//	uint8_t temp = sevenSegmentLEDConversion[sevenSegmentLEDBuffer];
//		if(temp & 0x01){
//			HAL_GPIO_WritePin(SEV_SEG_0_GPIO_Port, SEV_SEG_0_Pin, RESET);
//		} else{
//			HAL_GPIO_WritePin(SEV_SEG_0_GPIO_Port, SEV_SEG_0_Pin, SET);
//		}
//
//		if(temp & 0x02){
//			HAL_GPIO_WritePin(SEV_SEG_1_GPIO_Port, SEV_SEG_1_Pin, RESET);
//		} else{
//			HAL_GPIO_WritePin(SEV_SEG_1_GPIO_Port, SEV_SEG_1_Pin, SET);
//		}
//
//		if(temp & 0x04){
//			HAL_GPIO_WritePin(SEV_SEG_2_GPIO_Port, SEV_SEG_2_Pin, RESET);
//		} else{
//			HAL_GPIO_WritePin(SEV_SEG_2_GPIO_Port, SEV_SEG_2_Pin, SET);
//		}
//
//		if(temp & 0x08){
//			HAL_GPIO_WritePin(SEV_SEG_3_GPIO_Port, SEV_SEG_3_Pin, RESET);
//		} else{
//			HAL_GPIO_WritePin(SEV_SEG_3_GPIO_Port, SEV_SEG_3_Pin, SET);
//		}
//		if(temp & 0x10){
//			HAL_GPIO_WritePin(SEV_SEG_4_GPIO_Port, SEV_SEG_4_Pin, RESET);
//		} else{
//			HAL_GPIO_WritePin(SEV_SEG_4_GPIO_Port, SEV_SEG_4_Pin, SET);
//		}
//
//		if(temp & 0x20){
//			HAL_GPIO_WritePin(SEV_SEG_5_GPIO_Port, SEV_SEG_5_Pin, RESET);
//		} else{
//			HAL_GPIO_WritePin(SEV_SEG_5_GPIO_Port, SEV_SEG_5_Pin, SET);
//		}
//
//		if(temp & 0x40){
//			HAL_GPIO_WritePin(SEV_SEG_6_GPIO_Port, SEV_SEG_6_Pin, RESET);
//		} else{
//			HAL_GPIO_WritePin(SEV_SEG_6_GPIO_Port, SEV_SEG_6_Pin, SET);
//		}
//}
