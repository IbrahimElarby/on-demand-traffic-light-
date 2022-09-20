/*
 * Button.h
 *
 * Created: 9/14/2022 12:42:27 AM
 *  Author: GAMING STORE
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "../../MCAL/DIO Driver/DIO.h"
#include "../../MCAL/Timer Driver/timer.h"

void button_init(uint8_t buttonpin , uint8_t buttonport);
void button_read(uint8_t buttonpin , uint8_t buttonport, uint8_t* value);




#endif /* BUTTON_H_ */