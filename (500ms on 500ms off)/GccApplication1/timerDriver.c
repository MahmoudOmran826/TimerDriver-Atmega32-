
#include "registers.h"
#include "dataTypeConversion.h"
#include "timerDriver.h"
void delay(){
	//loading timer register with the needed value
	TCNT0 = 0xc2; //1 1 0 0 0 0 1 0      194 
	//Setting the timer mode to normal and setting prescaler to use \8 through timer counter control register 
	TCCR0=0x02;//0000 0020
	//wait until we have an overflow flag raised in bit 0 (TOV0) in Timer Interrupt Flag Register
	while((TIFR&0x01)==0x00);
	//set the TOV0 with it's initial value
	TIFR=0x01;
	//set the timer with it's initial value again
	TCNT0=0x00;
}