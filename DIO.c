/*
 * DIO.c
 *
 *  Created on: Oct 7, 2023
 *      Author: Aya
 */
#include "DIO.h"

void Dio_WriteChannel( Dio_ChannelType ChannelId, Dio_LevelType Level){
    switch ((ChannelId>>3)){
    case 0:
        Write_Bit_Data_R(GPIO_PORTA_DATA_BITS_R,(ChannelId%8),Level);
        break;
    case 1:
        Write_Bit_Data_R(GPIO_PORTB_DATA_BITS_R,(ChannelId%8),Level);
        break;
    case 2:
        Write_Bit_Data_R(GPIO_PORTC_DATA_BITS_R,(ChannelId%8),Level);
        break;
    case 3:
        Write_Bit_Data_R(GPIO_PORTD_DATA_BITS_R,(ChannelId%8),Level);
        break;
    case 4:
        Write_Bit_Data_R(GPIO_PORTE_DATA_BITS_R,(ChannelId%8),Level);
        break;
    case 5:
        Write_Bit_Data_R(GPIO_PORTF_DATA_BITS_R,(ChannelId%8),Level);
        break;
    }

}
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId){
    switch ((ChannelId>>3))
    {
    case 0:
        if (Get_Bit(GPIO_PORTA_DATA_R,(ChannelId%8))){
            return STD_HIGH;
        }
        else
        {
            return STD_LOW;
        }
    case 1:
        //        port = GPIO_PORTB_DATA_R;
        if (Get_Bit(GPIO_PORTB_DATA_R,(ChannelId%8))){
            return STD_HIGH;
        }
        else
        {
            return STD_LOW;
        }
    case 2:
        //        port = GPIO_PORTC_DATA_R;
        if (Get_Bit(GPIO_PORTC_DATA_R,(ChannelId%8))){
            return STD_HIGH;
        }
        else
        {
            return STD_LOW;
        }
    case 3:
        //        port = GPIO_PORTD_DATA_R;
        if (Get_Bit(GPIO_PORTD_DATA_R,(ChannelId%8))){
            return STD_HIGH;
        }
        else
        {
            return STD_LOW;
        }
    case 4:
        //        port = GPIO_PORTE_DATA_R;
        if (Get_Bit(GPIO_PORTE_DATA_R,(ChannelId%8))){
            return STD_HIGH;
        }
        else
        {
            return STD_LOW;
        }

    case 5:
        //        port = GPIO_PORTF_DATA_R;
        if (Get_Bit(GPIO_PORTF_DATA_R,(ChannelId%8))){
            return STD_HIGH;
        }
        else
        {
            return STD_LOW;
        }
    }
    return 2;
}
Dio_PortLevelType Dio_ReadPort( Dio_PortType PortId){
    switch (PortId){
    case 0:
        return GPIO_PORTA_DATA_R;
    case 1:
        return GPIO_PORTB_DATA_R;
    case 2:
        return GPIO_PORTC_DATA_R;
    case 3:
        return GPIO_PORTD_DATA_R;
    case 4:
        return GPIO_PORTE_DATA_R;
    case 5:
        return GPIO_PORTF_DATA_R;
    }
    return 0;
}
void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level){
    switch (PortId){
    case 0:
        GPIO_PORTA_DATA_R= Level;
        break;
    case 1:
        GPIO_PORTB_DATA_R= Level;
        break;
    case 2:
        GPIO_PORTC_DATA_R= Level;
        break;
    case 3:
        GPIO_PORTD_DATA_R= Level;
        break;
    case 4:
        GPIO_PORTE_DATA_R= Level;
        break;
    case 5:
        GPIO_PORTF_DATA_R= Level;
        break;
    }
}


