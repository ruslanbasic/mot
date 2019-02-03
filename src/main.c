/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/
/// http://www.ac6-tools.com/Eclipse-updates/org.openstm32.system-workbench.update-site-v2/
/// http://www.ac6-tools.com/Eclipse-updates/org.openstm32.system-workbench.site/

#include "stm32f10x.h"
#include "stm32f10x_rcc.h"
#include "stm32f10x_gpio.h"


#define out1_pin	GPIO_Pin_11
#define out1_io		GPIOC
#define out1_rcc	RCC_APB2Periph_GPIOC

#define out2_pin	GPIO_Pin_12
#define out2_io		GPIOC
#define out2_rcc	RCC_APB2Periph_GPIOC

#define out3_pin	GPIO_Pin_8
#define out3_io		GPIOA
#define out3_rcc	RCC_APB2Periph_GPIOA

#define out4_pin	GPIO_Pin_10
#define out4_io		GPIOC
#define out4_rcc	RCC_APB2Periph_GPIOC

#define out5_pin	GPIO_Pin_8
#define out5_io		GPIOC
#define out5_rcc	RCC_APB2Periph_GPIOC

#define out6_pin	GPIO_Pin_9
#define out6_io		GPIOC
#define out6_rcc	RCC_APB2Periph_GPIOC

#define out7_pin	GPIO_Pin_6
#define out7_io		GPIOC
#define out7_rcc	RCC_APB2Periph_GPIOC

#define out8_pin	GPIO_Pin_7
#define out8_io		GPIOC
#define out8_rcc	RCC_APB2Periph_GPIOC

#define out9_pin	GPIO_Pin_2
#define out9_io		GPIOD
#define out9_rcc	RCC_APB2Periph_GPIOD

#define out10_pin	GPIO_Pin_5
#define out10_io	GPIOB
#define out10_rcc	RCC_APB2Periph_GPIOB

#define out11_pin	GPIO_Pin_8
#define out11_io	GPIOB
#define out11_rcc	RCC_APB2Periph_GPIOB

#define out12_pin	GPIO_Pin_9
#define out12_io	GPIOB
#define out12_rcc	RCC_APB2Periph_GPIOB

#define pulse		0x00000fff
#define pause		0x00001fff



GPIO_InitTypeDef GPIO_InitStruct;


int main(void)
{
	volatile uint32_t zpause;

	/////////        GPIO init /////////////////////////////
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;

	RCC_APB2PeriphClockCmd (out1_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out1_pin;
	GPIO_Init(out1_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out2_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out2_pin;
	GPIO_Init(out2_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out3_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out3_pin;
	GPIO_Init(out3_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out4_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out4_pin;
	GPIO_Init(out4_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out5_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out5_pin;
	GPIO_Init(out5_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out6_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out6_pin;
	GPIO_Init(out6_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out7_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out7_pin;
	GPIO_Init(out7_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out8_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out8_pin;
	GPIO_Init(out8_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out9_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out9_pin;
	GPIO_Init(out9_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out10_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out10_pin;
	GPIO_Init(out10_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out11_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out11_pin;
	GPIO_Init(out11_io, &GPIO_InitStruct);

	RCC_APB2PeriphClockCmd (out12_rcc, ENABLE);
	GPIO_InitStruct.GPIO_Pin  = out12_pin;
	GPIO_Init(out12_io, &GPIO_InitStruct);

	/////////  and   GPIO init /////////////////////////////

	for(;;)
	{

		GPIO_SetBits(out1_io, out1_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out1_io, out1_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out2_io, out2_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out2_io, out2_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out3_io, out3_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out3_io, out3_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out4_io, out4_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out4_io, out4_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out5_io, out5_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out5_io, out5_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out6_io, out6_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out6_io, out6_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out7_io, out7_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out7_io, out7_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out8_io, out8_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out8_io, out8_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out9_io, out9_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out9_io, out9_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out10_io, out10_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out10_io, out10_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out11_io, out11_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out11_io, out11_pin);
		zpause=pause;
		while (zpause--);

		GPIO_SetBits(out12_io, out12_pin);
		zpause=pulse;
		while (zpause--);
		GPIO_ResetBits(out12_io, out12_pin);
		zpause=pause;
		while (zpause--);




	}

}








