/*
 * timer.h
 *
 * Created: 9/17/2022 10:45:53 AM
 *  Author: GAMING STORE
 */ 


#ifndef TIMER_H_
#define TIMER_H_

#include "../../Microcontroller/REGISTERS/Register.h"
#define  Intial_value_L 0xF7   
#define  Intial_value_H 0xC2

void timer1_init();
void timer1_config();
void timer1_start();
void delay();
void delay_s(uint32_t dly);



#endif /* TIMER_H_ */