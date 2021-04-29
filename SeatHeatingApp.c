/**
 * @file SeatHeatingApp.c
 * @author Shriya (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include<util/delay.h>
#include"./inc/activity1.h"
#include"./inc/activity2.h"
#include"./inc/activity3.h"
#include"./inc/activity4.h"

int main(void)
{
    buttonheat();
    InitADC();
    initPWM();
    InitUART();
    uint16_t temp=0;
    char temp_data;
     while(1)
    {
        // check button is on or off
        if(BUTTON_ON)
        {
            // check heater is on or off
            if(HEATER_ON)
            {
                LED_ON;
                temp = ReadTemp(0);
                temp_data=outputPWM(temp);
                write_string(temp_data);
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
