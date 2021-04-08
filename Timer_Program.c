#include"bit.h"
#include"STD_TYPES.h"
#include"DIO_Interface.h"
#include"avr/delay.h"
#include "Timer_Register.h"
#include "Timer_Config.h"

void Timer_VidInit(void)
{
	//normal mode
	clr_bit(TCCR0,WGM00);
	clr_bit(TCCR0,WGM01);
	//Interrupt enable
	clr_bit(TIMSK,OCIE0);
	set_bit(TIMSK,TOIE0);
	
	//preload value
	TCNT0=123;
	
	//set prescalling
	set_bit(TCCR0,CS02);
	clr_bit(TCCR0,CS01);
	set_bit(TCCR0,CS00);
	
}
void Timer_CTC_VidInit(void)
{
	//CTC mode
	clr_bit(TCCR0,WGM00);
	set_bit(TCCR0,WGM01);
	//Interrupt enable
	set_bit(TIMSK,OCIE0);
	clr_bit(TIMSK,TOIE0);

	//OCR
	OCR0=125;

	//set prescalling
	clr_bit(TCCR0,CS02);
	set_bit(TCCR0,CS01);
	set_bit(TCCR0,CS00);

}
void Timer_PWM_VidInit(void)
{
	//Fast PWM mode
	set_bit(TCCR1A,0);
	clr_bit(TCCR1A,1);
	set_bit(TCCR1B,3);

	//non inverted mode
	set_bit(TCCR1A,7);
	clr_bit(TCCR1A,6);

	//set prescalling
	set_bit(TCCR1B,2);
	clr_bit(TCCR1B,1);
	clr_bit(TCCR1B,0);

}
void Timer_SetDuty(u32 match)
{
	OCR1A=match;
}

void (*pcallback) (void);
void SetCallBack(void (*pfuc)(void))
{
	pcallback=pfuc;
}


void __vector_10(void)

{
	pcallback();
}

void __vector_11(void)

{
	pcallback();
}
