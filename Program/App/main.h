#ifndef MAIN_H
#define MAIN_H

#include "includes.h"

#define EYEBLINK_SENS_DDR	DDRB
#define EYEBLINK_SENS_PORT	PORTB
#define EYEBLINK_SENS_PPIN	PINB
#define EYEBLINK_SENS_PIN	PB0

#define N_BLINKS			8

/********* STRUCT DEFINITION */
volatile struct {
	volatile int8u Blink	:1;
	volatile int8u Meas		:1;
}Flags;

//FUNCTION PROTOTYPES
static	void	init		(void);
static	void 	disptitl 	(void);
static	void 	tmr2init	(void);
static	void 	tmr1init	(void);
static	void 	tmr0init	(void);
static	void	flagsinit	(void);
		void	EyeBlinkInit(void);
		
		
#endif
