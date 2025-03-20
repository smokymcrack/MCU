/*
 * GPIO.h
 *
 *  Created on: Mar 20, 2025
 *      Author: georg
 */

#ifndef GPIO_H_
#define GPIO_H_

#include "Common.h"

void gpio_init(void);

typedef struct GPIOx_TypeDef{
	volatile uint32_t 	MODER;
	volatile uint32_t	OTYPER;
	volatile uint32_t	OSPEEDR;
	volatile uint32_t 	PUPDR;

	volatile uint32_t	IDR;
	volatile uint32_t	ODR;
	volatile uint32_t 	BSSR;
	volatile uint32_t 	LCKR;

	volatile uint32_t	AFRL;
	volatile uint32_t	AFRH;

}GPIOx_TypeDef;

#define GPIOA			((GPIOx_TypeDef*) 0x40020000)
#define GPIOD			((GPIOx_TypeDef*) 0x40020C00)
#define GPIOG			((GPIOx_TypeDef*) 0x40021800)


#endif /* GPIO_H_ */
