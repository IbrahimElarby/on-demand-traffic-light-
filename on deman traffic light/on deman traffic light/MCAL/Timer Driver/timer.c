/*
 * timer.c
 *
 * Created: 9/17/2022 10:46:08 AM
 *  Author: GAMING STORE
 */ 


#include "timer.h"

void timer1_config()
{
	TCCR1A = 0x00;
	TCCR1B = 0x00;
}
void timer1_init()
{
	// intial value C2F7 with 64 prescaler
	TCNT1L = Intial_value_L; 
	TCNT1H = Intial_value_H;
}

void timer1_start()
{
	TCCR1B |=  0x03; // prescaler 64
}
void delay()
{
	timer1_config();
	timer1_init();
	timer1_start();
	while((TIFR & (1<<2)) == 0);
	TIFR |= 1<<2;
	timer1_config();
}
void delay_s(uint32_t dly)
{
	uint32_t i = 0;
	while (i != dly)
	{
		delay();
		i++;
	}
}