/*
 * ledmatrix_display.h
 *
 *  Created on: Sep 23, 2021
 *      Author: DELL
 */

#ifndef INC_LEDMATRIX_DISPLAY_H_
#define INC_LEDMATRIX_DISPLAY_H_

// Exercise 6 and 7
void update_led_matrix_buffer(void);
void setAllClock(void);
void clearAllClock(void);

// Exercise 8
void setNumberOnClock(int num);
void checksetNOC(void);

// Exercise 9
void clearNumberOnClock(int num);
void checkclearNOC(void);

#endif /* INC_LEDMATRIX_DISPLAY_H_ */
