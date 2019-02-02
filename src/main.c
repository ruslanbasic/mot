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

GPIO_InitTypeDef GPIO_InitStruct;


int main(void)
{
	volatile uint32_t pause;

	RCC_APB2PeriphClockCmd (RCC_APB2Periph_GPIOC, ENABLE);

	GPIO_InitStruct.GPIO_Pin  = GPIO_Pin_11 | GPIO_Pin_12;
	GPIO_InitStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOC, &GPIO_InitStruct);

	for(;;)
	{

		GPIO_SetBits(GPIOC, GPIO_Pin_11);
		pause=0x00ff;
		while (pause--);
		GPIO_SetBits(GPIOC, GPIO_Pin_12);
		pause=0x00ff;
		while (pause--);
		GPIO_ResetBits(GPIOC, GPIO_Pin_11);
		pause=0x00ff;
		while (pause--);
		GPIO_ResetBits(GPIOC, GPIO_Pin_12);
		pause=0x00ffffff;
		while (pause--);

	}

}








