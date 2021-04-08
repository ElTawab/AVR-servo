#include"STD_TYPES.h"
#include"bit.h"
#include"avr/delay.h"
#include"Timer_Register.h"
#include"DIO_Interface.h"
#include"Timer_Interface.h"
#include"GIE_Interface.h"
void main (void)
{ Timer_PWM_VidInit();
DIO_VidSetPinDirection(PORTD,PIN5,OUTPUT);
DIO_VidSetPinValue(PORTD,PIN5,OUTPUT);
	while(1)
	{
		 Timer_SetDuty(25);
_delay_ms(1000);
Timer_SetDuty(12);
_delay_ms(1000);
Timer_SetDuty(37);
_delay_ms(1000);


	}
}


