/**
 * @file activity4.h
 * @author Shriya
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__

#include<avr/io.h>
/**
 * @brief Initialize UART communication ports
 * 
 */
void InitUART();
/**
 * @brief Write character to ports
 * 
 */
void write_string(char input);

#endif