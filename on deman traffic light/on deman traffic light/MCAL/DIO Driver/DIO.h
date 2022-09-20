/*
 * DIO.h
 *
 * Created: 9/14/2022 12:15:53 AM
 *  Author: GAMING STORE
 */ 


#ifndef DIO_H_
#define DIO_H_

#include "../../Microcontroller/REGISTERS/Register.h"
// all internal typedefs of the driver
// all drivers micros
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//direaction defines
#define IN 0
#define OUT 1
// value define
#define LOW 0
#define HIGH 1
// all function prototype

void dio_init(uint8_t portnumber , uint8_t pinnumber , uint8_t direaction);
void dio_write(uint8_t portnumber , uint8_t pinnumber , uint8_t value);
void dio_toggle(uint8_t portnumber , uint8_t pinnumber );
void dio_read(uint8_t portnumber , uint8_t pinnumber , uint8_t* value);
#endif
