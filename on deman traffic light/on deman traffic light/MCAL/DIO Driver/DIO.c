/*
 * DIO.c
 *
 * Created: 9/14/2022 12:15:39 AM
 *  Author: GAMING STORE
 */ 
#include "dio.h"
void dio_init(uint8_t portnumber , uint8_t pinnumber , uint8_t direaction)
{
	switch(portnumber)
	{
		case PORT_A :
		if(direaction == IN)
		{
			DDRA &= ~(1<<pinnumber);
		}
		else if (direaction == OUT)
		{
			DDRA |= (1<<pinnumber);
		}
		break;
		case  PORT_B :
		if(direaction == IN)
		{
			DDRB &= ~(1<<pinnumber);
		}
		else if (direaction == OUT)
		{
			DDRB |= (1<<pinnumber);
		}
		break;
		case  PORT_C:
		if(direaction == IN)
		{
			DDRC &= ~(1<<pinnumber);
		}
		else if (direaction == OUT)
		{
			DDRC |= (1<<pinnumber);
		}
		break;
		case  PORT_D:
		if(direaction == IN)
		{
			DDRD &= ~(1<<pinnumber);
		}
		else if (direaction == OUT)
		{
			DDRD |= (1<<pinnumber);
		}
		break;
	}
}
void dio_write(uint8_t portnumber , uint8_t pinnumber , uint8_t value)
{
	switch(portnumber)
	{
		case  PORT_A:
		if(value == LOW)
		{
			PORTA &= ~(1<<pinnumber);
		}
		else if (value == HIGH)
		{
			PORTA |= (1<<pinnumber);
		}
		break;
		case  PORT_B:
		if(value == LOW)
		{
			PORTB &= ~(1<<pinnumber);
		}
		else if (value == HIGH)
		{
			PORTB |= (1<<pinnumber);
		}
		break;
		case PORT_C :
		if(value == LOW)
		{
			PORTC &= ~(1<<pinnumber);
		}
		else if (value == HIGH)
		{
			PORTC |= (1<<pinnumber);
		}
		break;
		case  PORT_D:
		if(value == LOW)
		{
			PORTD &= ~(1<<pinnumber);
		}
		else if (value == HIGH)
		{
			PORTD |= (1<<pinnumber);
		}
		break;
	}
}
void dio_toggle(uint8_t portnumber , uint8_t pinnumber )
{
	switch(portnumber)
	{
		case  PORT_A:
		PORTA ^= (1<<pinnumber);
		break;
		case  PORT_B:
		
		PORTB ^= (1<<pinnumber);
		
		break;
		case PORT_C :
		PORTC ^= (1<<pinnumber);
		
		break;
		case  PORT_D:
		PORTD ^= (1<<pinnumber);
	}
}
void dio_read(uint8_t portnumber , uint8_t pinnumber , uint8_t* value)
{
		switch(portnumber)
		{
			case  PORT_A:
			*value = ((*value & (1<<pinnumber))>> pinnumber) ;
			break;
			case  PORT_B:
			
			*value = ((*value & (1<<pinnumber))>> pinnumber) ;
			
			break;
			case PORT_C :
			*value = ((*value & (1<<pinnumber))>> pinnumber) ;
			
			break;
			case  PORT_D:
			*value = ((*value & (1<<pinnumber))>> pinnumber) ;
		}
}


