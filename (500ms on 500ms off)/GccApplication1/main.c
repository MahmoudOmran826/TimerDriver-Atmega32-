/*
 * GccApplication1.c
 *
 * Created: 6/24/2021 6:26:21 PM
 * Author : Mahmoud Omran
 */ 

//#include <avr/io.h>
#include "dataTypeConversion.h"
#include "registers.h"
#include "timerDriver.h"

void delay();
int main(void)
{
	PORTC_Data_Direction=0xff;//0000 0001
	//TIMSK=0x01;
	//SREG=0x80;
    /* Replace with your application code */
    while (1) 
    {
		
		PORTC_Data=0x01;//0000 0001
		delay();
		PORTC_Data=0x00;
		delay();
    }
}
