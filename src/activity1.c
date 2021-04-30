/**
 * @file activity1.c
 * @author Shriya
 * @brief
 * @version 0.1
 * @date 2021-04-29
 *
 * @copyright Copyright (c) 2021
 *
 */
#include<avr/io.h>
#include"../inc/activity1.h"

void buttonheat()
{
    DDRD &= ~(1<<PD1); //set PD1=0, CLEAR BIT, "BUTTON"
    DDRD &= ~(1<<PD0); // set PD0=0, "HEATER"
    DDRB |= (1<<PB0); //set PB0=1 FOR LED

    PORTD |= (1<<PD0); // SET BIT
    PORTD |= (1<<PD1); //set bit
    /**
     * @brief Checking the inputs from button sensor and heater sensor to glow the LED.
     *
     */
    while(1)
    {
        if ((PIND &(1<<PD1)) && ((PIND & (1<<PD0))))
        {
            PORTB &= ~(1<<PB0);
        }
        else if ((PIND &(1<<PD1)) && (!(PIND &(1<<PD0))))
        {
            PORTB &= ~(1<<PB0);
        }
        else if ((!(PIND &(1<<PD1))) && (PIND &(1<<PD0)))
        {
            PORTB &= ~(1<<PB0);
        }
        else if ((!(PIND &(1<<PD1))) && (!(PIND &(1<<PD0))))
        {
            PORTB |= (1<<PB0);
        }
    }
}
