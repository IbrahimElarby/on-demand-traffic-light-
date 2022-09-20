/*
 * on deman traffic light.c
 *
 * Created: 9/14/2022 12:10:47 AM
 * Author : GAMING STORE
 */ 

#include "Microcontroller/Interupts/interupt.h"
#include "Application/App.h"

car_led car_state;
uint8_t flag = 0;
int main(void)
{
    /* Replace with your application code */
	button_config();
	normal_mode_config();
	ped_mode_config();
	interrupt_config();
    while (1) 
    {   
			if(flag == 1)
			{
				ped_mode();
				flag = 0;
			}
		normal_red();
		if(flag == 1)
		{
			ped_mode();
			flag = 0;
		}
		normal_yellow();
		if(flag == 1)
		{
			ped_mode();
			flag = 0;
		}
		normal_green();
	
    }
	
}

ISR(EXT_INT_0)
{
	//ped_mode();
	flag = 1;
	
}

