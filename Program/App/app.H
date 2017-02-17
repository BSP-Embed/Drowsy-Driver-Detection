#ifndef _APP_H
#define _APP_H

/* Main settings */

/*comment below line for release*/

#define OPhNum	 "PHONE_NUMBER"


#define EEPROM_DISPLAY				0

/******** MAIN CONFIGURATION ENDS ****************/

/* LCD CONFIGURATION */
#define LCD_DDR           	   		DDRC 
#define LCD_DATA_PORT          		PORTC
#define LCD_ENABLE_PIN        		PC3 
#define LCD_REGISTER_SELECT_PIN     PC2
#define DISPLAY_INIT				1
#define LCD_NSCRL					3
#define FLOAT_T0_STRING				1
#define DECIMAL_PRECISION			10

/******** LCD CONFIGURATION ENDS ****************/

/* BUZZER: CONFIGURATION */
#define	BUZ_DDR						DDRC
#define	BUZ_PORT					PORTC
#define	BUZ_PIN						PC1
#define OFF_TIME					100
/******** BUZZER CONFIGURATION ENDS ****************/

/* LED: CONFIGURATION */

#define	LED_DDR			DDRC
#define	LED_PORT		PORTC
#define	LED_PIN			PC0

#define OFF_TIME		100
/******** LED CONFIGURATION ENDS ****************/

/* GSM: CONFIGURATION */

#define MSG_START					""
#define MSG_END						". Automated SMS By: DDD&AS."

/******** ADC CONFIGURATION ENDS ****************/
#define REF_VOL_256

/******** GSM CONFIGURATION ENDS ****************/

/******** EEPROM CONFIGURATION ****************/
#define EEPROM_DISPLAY		0

/******** RFID  CONFIGURATION ****************/
//#define DISPLAY_TAGNUMBER	1

/******** MOTOR CONFIGURATION   ****************/
#define MOT_PORT			PORTA
#define MOT_DDR				DDRA
#define MOT1_AN				PA3
#define MOT1_CA				PA4
#define MOT2_AN				PA5
#define MOT2_CA				PA6
/******** MOTOR CONFIGURATION ENDS  ****************/

/******* ALCOHOL SENSOR CONFIGURATION ***********/
#define ALSENS_DDR		DDRD
#define ALSENS_PORT		PORTD
#define ALSENS_PPIN		PIND
#define ALSENS_PIN		PD3
/******* ALCOHOL SENSOR CONFIGURATION ENDS *****/

/******** FIRE SENSOR CONFIGURATION ******/
#define FIRE_SENS_DDR		DDRD
#define FIRE_SENS_PORT		PORTD
#define FIRE_SENS_PPIN		PIND
#define FIRE_SENS_PIN		PD2
/******** FIRE SENSOR CONFIGURATION END ****/

/******** RELAY PINS CONFIGURATION    *****/
#define RLY_DDR				DDRA
#define RLY_PORT			PORTA
#define RLY1_PIN			PA4
#define RLY2_PIN			PA3
/******* RELAY PINS CONFIGURATION ENDS ****/

#endif
