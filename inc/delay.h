/**
  * @file    delay.h
  * @author  gmb
  * @date    2017
  * @brief   SysTick interrupt and delay function prototypes
  */

#ifndef __DELAY_H__
#define __DELAY_H__

#include <stm32f30x.h>
#include <stm32f3_discovery.h>
#include <stm32f30x_it.h>

void systick_function(void);
void delay_10ms(__IO uint32_t time);

#endif
