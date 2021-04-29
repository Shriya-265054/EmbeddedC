#include <avr/io.h>
#include"./inc/activity1.h"
#include"./inc/activity2.h"
#include"./inc/activity3.h"

int main(void)
{
    buttonheat();
    InitADC();
    initPWM();
    uint16_t temp=0, channel=0;
     while(1)
    {
        // check button is on or off
        if(BUTTON_ON)
        {
            // check heater is on or off
            if(HEATER_ON)
            {
                LED_ON;
                temp = ReadTemp(channel);
                outputPWM(temp);
                _delay_ms(200);
            }
            else 
            {
                LED_OFF;
                OCR1A=0;
            }
        }
        else
        {
            LED_OFF;
            OCR1A=0;
        } 
    }
    return 0;
}
