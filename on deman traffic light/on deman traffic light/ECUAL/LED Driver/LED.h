/*
 * LED.h
 *
 * Created: 9/14/2022 12:36:36 AM
 *  Author: GAMING STORE
 */ 

#ifndef led_h
#define led_h
#include "../../MCAL/DIO Driver/DIO.h"
#include "../../MCAL/Timer Driver/timer.h"


void led_init(uint8_t ledport , uint8_t ledpin);
void led_on(uint8_t ledport , uint8_t ledpin);
void led_off(uint8_t ledport , uint8_t ledpin);
void led_toggle(uint8_t ledport , uint8_t ledpin);

#endif
