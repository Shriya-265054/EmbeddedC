#include <avr/io.h>
int main(void)
{
    DDRD |= (1<<PD0); //set PB0=1 FOR LED
    DDRC &= ~(1<<PC0); //set PC0=0, CLEAR BIT, "BUTTON"
    DDRB &= ~(1<<PB0); // set PB0=0, "HEATER"
    // Insert code
    PORTC |= (1<<PC0); // SET BIT
    PORTB |= (1<<PB0); //set bit
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
