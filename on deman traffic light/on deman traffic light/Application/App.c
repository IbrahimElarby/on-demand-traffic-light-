/*
 * App.c
 *
 * Created: 9/18/2022 1:25:35 PM
 *  Author: GAMING STORE
 */ 
#include "App.h"
void button_config()
{
	button_init(2,PORT_D);
}
void normal_mode_config()
{
	led_init(car_port,car_green);
	led_init(car_port,car_yellow);
	led_init(car_port,car_red);
}
void ped_mode_config()
{
	led_init(ped_port,ped_green);
	led_init(ped_port,ped_yellow);
	led_init(ped_port,ped_red);
}
void normal_red()
{
		led_on(car_port,car_red);
		led_on(ped_port,ped_green);
		car_state = CAR_RED;
		delay_s(5);
		led_off(car_port,car_red);
		led_off(ped_port,ped_green);
}
void normal_yellow()
{
	led_off(car_port,car_yellow);
	led_off(ped_port,ped_yellow);
	car_state = CAR_YELLOW;
	for(int i = 0 ; i < 5 ; i++)
	{
		led_toggle(car_port,car_yellow);
		led_toggle(ped_port,ped_yellow);
		delay_s(1);
	}
	led_off(car_port,car_yellow);
	led_off(ped_port,ped_yellow);
}
void normal_green()
{
	led_on(car_port,car_green);
	led_on(ped_port,ped_red);
	car_state = CAR_GREEN;
	delay_s(5);
	led_off(car_port,car_green);
	led_off(ped_port,ped_red);
}
void pedred()
{
	led_on(ped_port,ped_red);
	delay_s(5);
	led_off(ped_port,ped_red);
}
void pedyellow()
{
	led_on(ped_port,ped_yellow);
	for(int i = 0 ; i < 5 ; i++)
	{
		led_toggle(ped_port,ped_yellow);
		delay_s(1);
	}
	led_off(ped_port,ped_yellow);
}
void pedgreen()
{
	led_on(ped_port,ped_green);
	delay_s(5);
	led_off(ped_port,ped_green);
}
car_led check_state(car_led car_state)
{
	return car_state;
}
void ped_mode()
{
	if(check_state(car_state) == CAR_RED)
	{
		led_on(car_port,car_red);
		pedgreen();
		led_off(car_port,car_red);
	}
	else if (check_state(car_state) == CAR_YELLOW  ||  check_state(car_state) == CAR_GREEN )
	{
		led_off(car_port,car_green);
		led_on(ped_port,ped_yellow);
		led_on(car_port,car_yellow);
		for(int i = 0 ; i < 5 ; i++)
		{
			led_toggle(ped_port,ped_yellow);
			led_toggle(car_port,car_yellow);
			delay_s(1);
		}
		led_off(ped_port,ped_yellow);
		led_off(car_port,car_yellow);
		led_on(car_port,car_red);
		pedgreen();
		led_off(car_port,car_red);
	}
	
}

