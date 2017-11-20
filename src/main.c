/* main.c
 * 2013, gmb */

#include <stm32f30x.h>
#include <stm32f3_discovery.h>
#include <stm32f30x_it.h>

#include <delay.h>

#define BSRR_VAL 0xC000

GPIO_InitTypeDef	GPIO_InitStructure;
RCC_ClocksTypeDef 	RCC_Clocks;

/* register interrupt function */
void SysTick_Handler(void){
	systick_function();
}

int main(void){

	RCC_GetClocksFreq(&RCC_Clocks);
	SysTick_Config(RCC_Clocks.HCLK_Frequency / 100);

	/* Initialize LEDs on STM32F3-Discovery board */
	STM_EVAL_LEDInit(LED3);
	STM_EVAL_LEDInit(LED4);
	STM_EVAL_LEDInit(LED5);
	STM_EVAL_LEDInit(LED6);
	STM_EVAL_LEDInit(LED7);
	STM_EVAL_LEDInit(LED8);
	STM_EVAL_LEDInit(LED9);
	STM_EVAL_LEDInit(LED10);

	while (1)
	{
		 /* LEDs Off */
		STM_EVAL_LEDOff(LED3);
		STM_EVAL_LEDOff(LED6);
		STM_EVAL_LEDOff(LED7);
		STM_EVAL_LEDOff(LED4);
		STM_EVAL_LEDOff(LED10);
		STM_EVAL_LEDOff(LED8);
		STM_EVAL_LEDOff(LED9);
		STM_EVAL_LEDOff(LED5);

		delay_10ms(50);	// 500 ms

		/* LEDs Off */
		STM_EVAL_LEDOn(LED3);
		STM_EVAL_LEDOn(LED6);
		STM_EVAL_LEDOn(LED7);
		STM_EVAL_LEDOn(LED4);
		STM_EVAL_LEDOn(LED10);
		STM_EVAL_LEDOn(LED8);
		STM_EVAL_LEDOn(LED9);
		STM_EVAL_LEDOn(LED5);

		delay_10ms(50);	// 500 ms
	}

	return 0;
}
