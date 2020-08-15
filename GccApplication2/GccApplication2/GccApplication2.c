/*
 * GccApplication2.c
 *
 * Created: 15-02-2019 16:32:17
 *  Author: DELL
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>
#include"uart.h"

int main(void)
{	
	char c;
	DDRB=0b11111111;
	PORTB=0B00000000;
	uart_init();//115200
	_delay_ms(100);
	
    while(1)
    {
		c=uart_read();
		if(c=='A')
		{
			PORTB=0B11111111;
		}
		if(c=='B')
		{
			PORTB=0B00000000;
		}
        //TODO:: Please write your application code 
    }
}