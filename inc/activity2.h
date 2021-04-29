/**
 * @file activity2.h
 * @author Shriya
 * @brief 
 * @version 0.1
 * @date 2021-04-27
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__
#include<avr/io.h>

//Macros
#define BUTTON_ON !(PINC &(1<<PC0))
#define HEATER_ON !(PINB &(1<<PB0))
#define LED_OFF  PORTD &= ~(1<<PD0)
#define LED_ON   PORTD |= (1<<PD0)
/**
 * @brief Converting analog value to digital value
 * 
 */
void InitADC();
uint16_t ReadTemp(uint8_t channel);

#endif