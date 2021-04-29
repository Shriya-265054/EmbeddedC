#include<avr/io.h>
#include<util/delay.h>
#include"../inc/activity3.h"

void initPWM(void)
{
    DDRB|=(1<<PB1);
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
}
void outputPWM(uint16_t temp)
{
    initPWM();
    if(temp >=0 && temp >=200)
    {
        OCR1A = 205;
        _delay_ms(200);
    }
    else if (temp >=210 && temp >=500)
    {
        OCR1A = 410;
        _delay_ms(200);
    }
    else if (temp >=510 && temp >=700)
    {
        OCR1A = 717;
        _delay_ms(200);
    }
    else if (temp >=710 && temp >=1024)
    {
        OCR1A = 973;
        _delay_ms(200);
    }
}
