#ifndef _Timer_Register_H_
#define _Timer_Register_H_


#define TIMSK *((volatile u8 *)0x59)
#define TCCR0 *((volatile u8 *)0x53)
#define TCNT0 *((volatile u8 *)0x50)
#define OCR0 *((volatile u8 *)0x5C)

#define TCCR1A *((volatile u8 *)0x4F)
#define TCCR1B *((volatile u8 *)0x4E)
#define TCNT1 *((volatile u16 *)0x4C)
#define ICR1 *((volatile u16 *)0x46)
#define OCR1B *((volatile u16 *)0x48)
#define OCR1A *((volatile u16 *)0x4A)

#define FOC0 7
#define WGM00 6
#define COM01 5
#define COM00 4
#define WGM01 3
#define CS02 2
#define CS01 1
#define CS00 0


#define OCIE2 7
#define TOIE2 6
#define TICIE1 5
#define OCIE1A 4
#define OCIE1B 3
#define TOIE1 2
#define OCIE0 1
#define TOIE0 0

void __vector_10(void) __attribute((signal));
void __vector_11(void) __attribute((signal));
#endif
