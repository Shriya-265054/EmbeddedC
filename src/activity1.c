#include<avr/io.h>
#include"../inc/activity1.h"

void buttonheat()
{
    DDRC &= ~(1<<PC0); //set PC0=0, CLEAR BIT, "BUTTON"
    DDRB &= ~(1<<PB0); // set PB0=0, "HEATER"
    DDRD |= (1<<PD0); //set PB0=1 FOR LED

    PORTC |= (1<<PC0); // SET BIT
    PORTB |= (1<<PB0); //set bit
}