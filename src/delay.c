/**
  * @file    delay.c
  * @author  gmb
  * @date    2017
  * @brief   SysTick interrupt and delay function definitions
  */

#include <delay.h>

static __IO uint32_t _timig_delay = 0;

/**
 * @method waits time * 10 ms
 * @param  time       time in 10 ms (1000 = 100 ms)
 */
void delay_10ms(__IO uint32_t time){
	_timig_delay = time;

	while(_timig_delay != 0);
}

/**
 * @method interrupt function for SysTick
 */
void systick_function(void){
	if (_timig_delay != 0){
		_timig_delay--;
	}
}
