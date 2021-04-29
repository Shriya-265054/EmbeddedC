/**
 * @file activity1.h
 * @author Shriya
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY1_H__
#define __ACTIVITY1_H__
#include<avr/io.h>

#define BUTTON_ON !(PIND &(1<<PD0))
#define HEATER_ON !(PIND &(1<<PD1))
#define LED_OFF  PORTB &= ~(1<<PB0)
#define LED_ON   PORTB |= (1<<PB0)
/**
 * @brief Changing the state of LED according to Button sensor and Heater sensor
 * 
 */
void buttonheat(void);

#endif
