/*
 * Port_Driver.c
 *
 *  Created on: Oct 7, 2023
 *      Author: Aya
 */
#include "Port_Driver.h"
#include "tm4c123gh6pm.h"
void Port_Init(void){
    SYSCTL_RCGCGPIO_R|=0x20;
    while ((SYSCTL_PRGPIO_R&0x20)==0);
    GPIO_PORTF_LOCK_R=0X4C4F434B;
    GPIO_PORTF_CR_R=0xFF;
    GPIO_PORTF_DIR_R= 0xFF;
    GPIO_PORTF_DEN_R=  0xFF;  //ENABLING THE USED PINS
}



