/*
 * Blinkled.c
 *
 * Created: 15-02-2019 11:40:00
 *  Author: DELL
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include<util/delay.h>

int main(void)
{
	DDRB=0b11111111;
    while(1)
    {
       PORTB=0b11111111;
	   _delay_ms(1000);
	   PORTB=0b00000000;
	   _delay_ms(1000); //TODO:: Please write your application code 
    }
}