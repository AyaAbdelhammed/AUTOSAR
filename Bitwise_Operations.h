/*
 * Bitwise_Operations.h
 *
 *  Created on: Aug 13, 2023
 *      Author: EUI-Support
 */
#ifndef BITWISE_OPERATIONS_H_
#define BITWISE_OPERATIONS_H_
/***************************************************************************/
typedef char uint8;
typedef short uint16;
typedef int uint32;
/***************************************************************************/
#define Set_Bit(Register,Bit) (Register|= 1<<Bit)
#define Clear_Bit(Register,Bit) (Register &=~ (1<<Bit))
#define Set_Bit_Data_R(Data_Bits_Register,Pin) ( *(Data_Bits_Register + (1<<Pin)) = 1<<Pin )            /*GPIO_DATA_BITS_R*/
#define Clear_Bit_Data_R(Data_Bits_Register,Pin) ( *(Data_Bits_Register + (1<<Pin)) = 0<<Pin )            /*GPIO_DATA_BITS_R*/
#define Get_Bit(Register,Bit) (Register & (1<<Bit))
#define Toggle_Bit(Register,Bit) (Register^=1<<Bit)
#define Write_Port_R(Register,Value) (Register = Value)
#define Set_Port(Port_Register) (Port_Register = 0xff)
#define Clear_Port(Port_Register) (Port_Register = 0x00)
#define Write_Bit_Data_R(Data_Bits_Register,Pin,Level) ( *(Data_Bits_Register + (1<<Pin)) = Level<<Pin )
#endif /* BITWISE_OPERATIONS_H_ */
