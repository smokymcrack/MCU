/*
 * Clock.h
 *
 *  Created on: Mar 20, 2025
 *      Author: georg
 */

#ifndef CLOCK_H_
#define CLOCK_H_


#include "Common.h"

void clk_init(void);


typedef struct RCC_TypeDef
{
	volatile uint32_t	CR;
	volatile uint32_t	PLLCFGR;
	volatile uint32_t	CFGR;
	volatile uint32_t	CIR;

	volatile uint32_t	AHB1RSTR;
	volatile uint32_t 	AHB2RSTR;
	volatile uint32_t	AHB3RSTR;
	volatile uint32_t 	RESERVED001C;

	volatile uint32_t	APB1RSTR;
	volatile uint32_t	APB2RSTR;
	volatile uint32_t 	RESERVED0028;
	volatile uint32_t	RESERVED002C;

	volatile uint32_t	AHB1ENR;
	volatile uint32_t	AHB2ENR;
	volatile uint32_t	AHB3ENR;
	volatile uint32_t	RESERVED003C;

	volatile uint32_t	APB1ENR;
	volatile uint32_t	APB2ENR;
	volatile uint32_t 	RESERVED0048;
	volatile uint32_t	RESERVED004C;

	volatile uint32_t	AHB1LPENR;
	volatile uint32_t	AHB2LPENR;
	volatile uint32_t	AHB3LPENR;
	volatile uint32_t	RESERVED005C;

	volatile uint32_t	APB1LPENR;
	volatile uint32_t	APB2LPENR;
	volatile uint32_t	RESERVED0068;
	volatile uint32_t	RESERVED006C;

	volatile uint32_t	BDCR;
	volatile uint32_t	CSR;
	volatile uint32_t	RESERVED0078;
	volatile uint32_t	RESERVED007C;

	volatile uint32_t	SSCGR;
	volatile uint32_t	PLLI2SCFGR;
	volatile uint32_t	PLLSAICFGR;
	volatile uint32_t	DCKCFGR;

}RCC_TypeDef;

#define RCC_BASE_ADDRESS			0x40023800

#define RCC							((RCC_TypeDef*)RCC_BASE_ADDRESS)


#endif /* CLOCK_H_ */
