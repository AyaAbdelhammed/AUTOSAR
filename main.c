

/**
 * main.c
 */
#include "DIO.h"
#include "Port_Driver.h"
void Delay_ms(int y);
int main(void)
{
    Port_Init();
    for(;;){
        Dio_WriteChannel(41, STD_HIGH);
        Delay_ms(500);
        Dio_WriteChannel(41, STD_LOW);
        Dio_WriteChannel(42, STD_HIGH);
        Delay_ms(500);
        Dio_WriteChannel(42, STD_LOW);
        Dio_WriteChannel(43, STD_HIGH);
        Delay_ms(500);
        Dio_WriteChannel(43, STD_LOW);
        Dio_WriteChannel(41, STD_HIGH);
        Dio_WriteChannel(42, STD_HIGH);
        Dio_WriteChannel(43, STD_HIGH);
        Delay_ms(500);
        Dio_WriteChannel(41, STD_LOW);
        Dio_WriteChannel(42, STD_LOW);
        Dio_WriteChannel(43, STD_LOW);
    }
}
void Delay_ms(int y){
    int x,z;
    for (x=0;x<y;x++){
        for (z=0;z<3180;z++);
    }
}
