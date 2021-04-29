/**
 * @file activity3.c
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
#include"../inc/activity3.h"
#include"../inc/activity4.h"
/**
 * @brief Initializing Timer 1
 * 
 */
void initPWM(void)
{
    DDRB|=(1<<PB1);
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
}
/**
 * @brief Generate PWM
 * 
 * @param temp 
 */
char outputPWM(uint16_t temp)
{
    
    if(temp >=0 && temp >=200)
    {
        OCR1A = 205;  //20% of duty cycle
        _delay_ms(20);
        return 'p';
    }
    else if (temp >=210 && temp >=500)
    {
        OCR1A = 410;  //40% of duty cycle
        _delay_ms(20);
        return 'q';
    }
    else if (temp >=510 && temp >=700)
    {
        OCR1A = 717;   //70% of duty cycle
        _delay_ms(20);
        return 'r';
    }
    else if (temp >=710 && temp >=1024)
    {
        OCR1A = 973;   //95% of duty cycle
        _delay_ms(20);
        return 's';
    }
}
