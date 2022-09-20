/*
 * interput.c
 *
 * Created: 9/17/2022 5:22:13 PM
 *  Author: GAMING STORE
 */ 
#include "interupt.h"

void interrupt_config()
{
	SREG |= (1<<7);
	MCUCR |= 0x03;
	GICR |= (1<<6);
}