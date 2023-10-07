/*
 * DIO.h
 *
 *  Created on: Oct 7, 2023
 *      Author: Aya
 */

#ifndef DIO_H_
#define DIO_H_
#include "Bitwise_Operations.h"
#include "tm4c123gh6pm.h"
#define STD_LOW 0x00 //input
#define STD_HIGH  0x01 // output
typedef uint8 Dio_LevelType; //Numeric ID of a DIO channel
typedef uint8 Dio_PortType;    //Numeric ID of a DIO port
typedef uint8 Dio_PortLevelType;
typedef uint8 Dio_ChannelType;
typedef struct
{
    uint16 mask;//This element mask which defines the positions of the channel group
    uint8 offset; //This element shall be the position of the Channel Group on the port,counted from the LSB.
    Dio_PortType port;//This shall be the port on which the Channel group is defined

}Dio_ChannelGroupType;
/**********************Function Prototypes*************************************/
void Dio_WriteChannel( Dio_ChannelType ChannelId, Dio_LevelType Level);
Dio_LevelType Dio_ReadChannel(Dio_ChannelType ChannelId);
Dio_PortLevelType Dio_ReadPort( Dio_PortType PortId);
void Dio_WritePort(Dio_PortType PortId, Dio_PortLevelType Level);
#endif /* DIO_H_ */
