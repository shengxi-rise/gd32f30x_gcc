//
// Created by xtx on 2024/2/23.
//
/*!
\file  main.c
    \brief USART printf demo
*/

/*
    Copyright (C) 2017 GigaDevice

    2017-06-23, V1.0.0, demo for GD32F30x
*/
//#include "core_cm4.h"
#include "gd32f30x.h"
#include "systick.h"
#include <stdio.h>

void led_init(void);
void led_flash(int times);

/*!
    \brief      main function
    \param[in]  none
    \param[out] none
    \retval     none
*/
int main(void)
{

    /* configure systick */
    systick_config();
    rcu_periph_clock_enable(RCU_GPIOG);
    gpio_init(GPIOG,GPIO_MODE_OUT_PP,GPIO_OSPEED_50MHZ,GPIO_PIN_2);
    gpio_bit_reset(GPIOG,GPIO_PIN_2);


    while(1){
    }

}
