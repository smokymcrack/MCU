/*
 * GPIO.c
 *
 *  Created on: Mar 20, 2025
 *      Author: georg
 */
#include "GPIO.h"

void gpio_init()
{
	/*
	 * Pushbutton setup
	 * 1) Set PA0 to input
	 * 2) Set Pull down resistor
	 */
	GPIOA->MODER &= ~(BIT1 | BIT0);
	GPIOA->PUPDR &= ~(BIT1 | BIT0);
	GPIOA->PUPDR |= BIT1;			// Pull down resistor because Active High

	//Enable Orange LED
	GPIOG->MODER &= ~(BIT29 | BIT28);
	GPIOG->MODER |= BIT28;

	GPIOG->PUPDR &= ~(BIT29 | BIT28);	//No Pull up or Pull down resistor


}
