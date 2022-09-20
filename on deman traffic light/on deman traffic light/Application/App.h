/*
 * App.h
 *
 * Created: 9/18/2022 1:26:03 PM
 *  Author: GAMING STORE
 */ 


#ifndef APP_H_
#define APP_H_


#include "../ECUAL/LED Driver/LED.h"
#include "../ECUAL/Button Driver/Button.h"


typedef enum ped_led {PED_GREEN , PED_YELLOW , PED_RED }ped_led;
typedef enum car_led {CAR_GREEN , CAR_YELLOW , CAR_RED }car_led;
extern car_led car_state;
extern uint8_t flag;
	
#define car_port PORT_A 	
#define car_green 0
#define car_yellow 1
#define car_red 2
#define ped_port PORT_B
#define ped_green 0
#define ped_yellow 1
#define ped_red 2

void normal_red();
void normal_yellow();
void normal_green();

void pedred();
void pedyellow();
void pedgreen();	

void normal_mode_config();
void ped_mode_config();
void button_config();

void normal_mode();
void ped_mode();

car_led check_state(car_led);


#endif /* APP_H_ */