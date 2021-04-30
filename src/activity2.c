/**
 * @file activity2.c
 * @author Shriya
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<avr/io.h>
#include<util/delay.h>
#include "../inc/activity2.h"
/**
 * @brief Initializing and reading ADC values
 * 
 */
void InitADC()
{
    ADMUX|=(1<<REFS0); // AVcc to +5V
    ADCSRA=(1<<ADEN)|(7<<ADPS0); // Prescaler as 128
}

uint16_t ReadTemp(uint8_t channel)
{
    // Selecting of ADC channel (0-7)
    ADMUX&=0xf8;
    channel=channel&0b00000111;
    ADMUX|=channel;
    // Start conversion 
    ADCSRA|=(1<<ADSC);
    // Set ADIF to 1 when conversion is complete
    while(!(ADCSRA & (1<<ADIF)));
    // Clear ADIF
    ADCSRA|= (1<<ADIF);
    return (ADC);
}

