/*
 * Clock.c
 *
 *  Created on: Mar 20, 2025
 *      Author: georg
 */

#include "Clock.h"



void clk_init()
{
	RCC->AHB1ENR |= BIT0;		//Enable GPIOA
	RCC->AHB1ENR |= BIT3;		//Enable GPIOD

}
