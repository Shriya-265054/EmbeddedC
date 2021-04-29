/**
 * @file activity3.h
 * @author Shriya
 * @brief 
 * @version 0.1
 * @date 2021-04-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__
#include<avr/io.h>
/**
 * @brief Generating PWM output
 * 
 */
void initPWM(void);
void outputPWM(uint16_t temp);

#endif