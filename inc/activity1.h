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


#define BUTTON_SENSOR_ON !(PINC &(1<<PC0))
#define HEATER_SENSOR_ON !(PINB &(1<<PB0))

void buttonheat(void);

#endif
