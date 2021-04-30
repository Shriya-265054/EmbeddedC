#include<avr/io.h>
#include"../inc/activity4.h"

#define BAUD 9600
#define F_CPU 16000000
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1)
#define TRANSMITING_DATA !(UCSR0A & (1<<UDRE0))
#define RECEIVING_DATA !(UCSR0A & (1<<RXC0))
#define INPUT UDR0
/**
 * @brief Initialize UART
 * 
 */
void InitUART()
{
    UBRR0H = (BAUDRATE>>8)&(0x00ff); //Set Baud rate 
    UBRR0L = BAUDRATE;
    UCSR0C = (1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00); //Enabling transmitter and receiver
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0); 
}

/**
 * @brief write UART
 * 
 * @param input 
 */

void write_string(char input)
{
    if(input == 'q')
    {
        while(TRANSMITING_DATA)
        {};
        INPUT='2';
        INPUT='5';
        INPUT='C';
        INPUT=' ';
    }
    if(input == 'p')
    {
        while(TRANSMITING_DATA)
        {};
        INPUT='2';
        INPUT='0';
        INPUT='C';
        INPUT=' ';
    }
    if(input == 'r')
    {
        while(TRANSMITING_DATA)
        {};
        INPUT='2';
        INPUT='9';
        INPUT='C';
        INPUT=' ';
    }
    if(input == 's')
    {
        while(TRANSMITING_DATA)
        {};
        INPUT='3';
        INPUT='3';
        INPUT='C';
        INPUT=' ';
    }
}