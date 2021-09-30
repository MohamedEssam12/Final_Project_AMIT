/*
 * FinalProject_master.c
 *
 * Created: 9/30/2021 8:52:59 PM
 * Author : HP
 */ 

//SPI Master

#include "../MCAL/SPI.h"
#include "../MCAL/UART.h"
#include "../HAL/LCD.h"


int main(void)
{
	//Initializations
	
	SPI_Init();
	UART_Init();
	LCD_Init();
	
	// value which stores data for master to be sent to slave
   
   uint8_t data_recieve = 0;
   
    while (1) 
    {
		
		data_recieve = UART_Receive();
		
		switch (data_recieve)
		{
		
		// no data is stored from master	
			
		case  0 : 
		LCD_CLEAR();
		LCD_WRITE_STR("No Data transfer");	
			break;
			
		//stored data to be sent to slave	
			
		default:
		SPI_Transmit(data_recieve);
		LCD_CLEAR();
		LCD_WRITE_STR("Data OK");
		data_recieve = 0;
			break;
		}
		
    }
}

