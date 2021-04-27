#include <avr/io.h>
#include"./inc/activity1.h"

int main(void)
{
    buttonheat();
    while(1)
    {
        if ((PINC &(1<<PC0)) && ((PINB & (1<<PB0))))
        {
            PORTD &= ~(1<<PD0);
        }
        else if ((PINC &(1<<PC0)) && (!(PINB &(1<<PB0))))
        {
            PORTD &= ~(1<<PD0);
        }
        else if ((!(PINC &(1<<PC0))) && (PINB &(1<<PB0)))
        {
            PORTD &= ~(1<<PD0);
        }
        else if ((!(PINC &(1<<PC0))) && (!(PINB &(1<<PB0))))
        {
            PORTD |= (1<<PD0);
        }

    }
    return 0;
}
