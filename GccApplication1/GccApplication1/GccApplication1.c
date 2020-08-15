/*
 * GccApplication1.c
 *
 * Created: 15-02-2019 15:09:02
 *  Author: DELL
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "avrt.h"

int main(void)
{
	uart_init();
	_delay_ms(100);
	while(1)
	{
		uart_string("my name is xyz");
		uart_num(230);
		uart_char('\n');
		_delay_ms(1000);
	}
}