/*
 * OUTPUT_Module.c
 *
 * Created: 8/7/2021 10:20:07 PM
 *  Author:
 */ 


#include "OUTPUT_Module.h"

void LED0_Initialize(void)
{
	DIO_SetPin_Direction(LED0_DDR, LED0, LED_OUTPUT);
}
void LED0_ON(void)
{
	DIO_SetPin_State(LED0_PRT, LED0, LED_HIGH);
}
void LED0_OFF(void)
{
	DIO_SetPin_State(LED0_PRT, LED0, LED_LOW);
}
void LED0_Toggle(void)
{
	DIO_TglPin_State(LED0_PRT, LED0);
}
void LED1_Initialize(void)
{
	DIO_SetPin_Direction(LED1_DDR, LED1, LED_OUTPUT);
}
void LED2_Initialize(void)
{
	DIO_SetPin_Direction(LED2_DDR, LED2, LED_OUTPUT);
}
void LED1_Toggle(void)
{
	DIO_TglPin_State(LED1_DDR, LED1);
}
void LED2_Toggle(void)
{
	DIO_TglPin_State(LED2_DDR, LED2);
}
void BUZZER_Initialize(void)
{
	DIO_SetPin_Direction(DIO_PORTA, DIO_PIN3, LED_OUTPUT);
}

void BUZZER_Toggle(void)
{
	DIO_TglPin_State(DIO_PORTA, DIO_PIN3);
}