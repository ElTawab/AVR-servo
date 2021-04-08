#ifndef _Timer_Interface_H_
#define _Timer_Interface_H_
void Timer_VidInit(void);
void Timer_CTC_VidInit(void);
void Timer_PWM_VidInit(void);
void Timer_SetDuty(u32 match);
#endif
