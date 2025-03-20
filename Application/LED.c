/*
 * LED.c
 *
 *  Created on: Mar 20, 2025
 *      Author: georg
 */
#include "LED.h"

void led_toggle(LED_TypeDef* LED)
{
	LED->Port->MODER ^= (1U << (2 * LED->Pin));
}

