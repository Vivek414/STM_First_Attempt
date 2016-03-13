#include "stm32f4xx.h"
#include "stm32f4xx_rcc.h"
#include "stm32f4xx_gpio.h"
GPIO_InitTypeDef gpiovivek;
int main(void)
{

	volatile int i=0;

	RCC_AHB1PeriphClockCmd(RCC_AHB1Periph_GPIOD,ENABLE);


	gpiovivek.GPIO_Pin = GPIO_Pin_12;
	gpiovivek.GPIO_Mode = GPIO_Mode_OUT;
	gpiovivek.GPIO_Speed = GPIO_Speed_2MHz;
	gpiovivek.GPIO_OType = GPIO_OType_PP;
	gpiovivek.GPIO_PuPd = GPIO_PuPd_NOPULL;
	GPIO_Init(GPIOD, &gpiovivek);

while(1)
    	GPIO_SetBits(GPIOD,GPIO_Pin_12);
    	for(i=0;i<500000;i++);
    	i=0;
    	GPIO_ResetBits(GPIOD,GPIO_Pin_12);
    	for(i=0;i<500000;i++);
    	i=0;



    return 0;
}
