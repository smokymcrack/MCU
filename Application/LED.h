/*
 * LED.h
 *
 *  Created on: Mar 20, 2025
 *      Author: georg
 */

#ifndef LED_H_
#define LED_H_

#include "GPIO.h"



typedef enum
{
	LED_OFF = 0,
	LED_ON = 1
}LED_STATE;


typedef struct LED_TypeDef
{
	GPIOx_TypeDef*	Port;
	uint16_t		Pin;
	LED_STATE 		state;
}LED_TypeDef;

LED_TypeDef OrangeLED = {GPIOG, BIT14, LED_OFF};

void led_toggle(LED_TypeDef* LED);


#endif /* LED_H_ */
