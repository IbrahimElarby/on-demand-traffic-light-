/*
 * Register.h
 *
 * Created: 9/14/2022 12:19:13 AM
 *  Author: GAMING STORE
 */ 


#ifndef REGISTER_H_
#define REGISTER_H_


typedef unsigned char uint8_t;
typedef unsigned int uint32_t;



/*   DIO REGISTERS  */
/*  PORTA   */
#define PORTA *((volatile uint8_t*)0X3B) // 8bit register
#define DDRA *((volatile uint8_t*)0X3A) // 8bit register
#define PINA *((volatile uint8_t*)0X39) // 8 bit register

/*  PORTB   */
#define PORTB *((volatile uint8_t*)0X38) // 8bit register
#define DDRB *((volatile uint8_t*)0X37) // 8bit register
#define PINB *((volatile uint8_t*)0X36) // 8 bit register

/*  PORTC   */
#define PORTC *((volatile uint8_t*)0X35) // 8bit register
#define DDRC *((volatile uint8_t*)0X34) // 8bit register
#define PINC *((volatile uint8_t*)0X33) // 8 bit register

/*  PORTD   */
#define PORTD *((volatile uint8_t*)0X32) // 8bit register
#define DDRD *((volatile uint8_t*)0X31) // 8bit register
#define PIND *((volatile uint8_t*)0X30) // 8 bit register

/* timer0 */
#define TCCR0 *((volatile uint8_t*)0X53) // 8bit register
#define TCNT0 *((volatile uint8_t*)0X52) // 8bit register
#define TIFR *((volatile uint8_t*)0X58) // 8bit register

/* timer1 */ 
#define TCCR1A *((volatile uint8_t*)0X4F) // 8bit register
#define TCCR1B *((volatile uint8_t*)0X4E) // 8bit register
#define TCNT1H *((volatile uint8_t*)0X4D) // 8bit register
#define TCNT1L *((volatile uint8_t*)0X4C) // 8bit register
#define TIMSK *((volatile uint8_t*)0X59) // 8bit register


/* interrupt registers   */ 
#define SREG *((volatile uint8_t*)0X5F) // 8bit register
#define GICR *((volatile uint8_t*)0X5B) // 8bit register
#define GIFR *((volatile uint8_t*)0X5A) // 8bit register
#define MCUCR *((volatile uint8_t*)0X55) // 8bit register
#define MCUCSR *((volatile uint8_t*)0X54) // 8bit register

#endif /* REGISTER_H_ */