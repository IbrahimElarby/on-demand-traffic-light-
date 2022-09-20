/*
 * Button.c
 *
 * Created: 9/14/2022 12:42:45 AM
 *  Author: GAMING STORE
 */ 
#include "Button.h"

void button_init(uint8_t buttonpin , uint8_t buttonport)
{
	dio_init(buttonport,buttonpin,IN);
}
void button_read(uint8_t buttonpin , uint8_t buttonport, uint8_t* value)
{
	dio_read(buttonport,buttonpin, value);
}