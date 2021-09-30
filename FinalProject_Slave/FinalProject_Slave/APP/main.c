/*
 * FinalProject_Slave.c
 *
 * Created: 9/30/2021 9:29:17 PM
 * Author : HP
 */ 

//SPI Slave

#include "../MCAL/SPI.h"
#include "../HAL/OUTPUT_Module.h"
#include "../HAL/LCD.h"


int main(void)
{
	//Initializations
	
    SPI_Init();
	LCD_Init();
	LED0_Initialize();
	LED1_Initialize();
	LED2_Initialize();
	BUZZER_Initialize();
	
	// Value which stores received data from master
	
	uint8_t data_receieve = 0;
	
    while (1) 
    {
		data_receieve = SPI_Receive();
		
		// cases of Data received
		
		switch (data_receieve)
		{
			// case no data received
			
			case 0 :
			LCD_CLEAR();
			LCD_WRITE_STR("No Data");
				break;
			
			//case data was '1'
			
			case '1' :
			LCD_CLEAR();
			LCD_WRITE_STR("Data Received");
			LED0_Toggle();
			BUZZER_Toggle();
			data_receieve=0;
				break;
			
			//case data was '2'
			
			case '2' :
			LCD_CLEAR();
			LCD_WRITE_STR("Data Received");
			LED1_Toggle();
			BUZZER_Toggle();
			data_receieve=0;
				break;
			
			//case data was '3'
				
			case '3' :
			LCD_CLEAR();
			LCD_WRITE_STR("Data Received");
			LED2_Toggle();
			BUZZER_Toggle();
			data_receieve=0;
				break;
		}
    }
}

