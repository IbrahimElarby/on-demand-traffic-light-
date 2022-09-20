/*
 * LED.c
 *
 * Created: 9/14/2022 12:36:17 AM
 *  Author: GAMING STORE
 */ 
#include "led.h"
void led_init(uint8_t ledport , uint8_t ledpin)
{
	dio_init(ledport,ledpin,OUT);
}
void led_on(uint8_t ledport , uint8_t ledpin)
{
	dio_write(ledport,ledpin,HIGH);
}
void led_off(uint8_t ledport , uint8_t ledpin)
{
	dio_write(ledport,ledpin,LOW);
}
void led_toggle(uint8_t ledport , uint8_t ledpin)
{
	dio_toggle(ledport,ledpin);
}