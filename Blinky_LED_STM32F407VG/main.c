
#include "Board_LED.h"
#include "stdio.h"
//prototyped in Board_LED.h
//extern int32_t  LED_Initialize   (void);
//extern int32_t  LED_Uninitialize (void);
//extern int32_t  LED_On           (uint32_t num);
//extern int32_t  LED_Off          (uint32_t num);
//extern int32_t  LED_SetOut       (uint32_t val);
//extern uint32_t LED_GetCount     (void);

void delay(void){
	
	uint32_t i = 0;
	for( i=1; i < 500000; i++); 
}



//Blink the LED Green -> Orange -> Red -> Blue in a loop

int main(void){
	

	while(1){
		
		//Enable Clock 
		LED_Initialize();		
				
		
		LED_On(0); //Green LED 
		
		delay();
		
		LED_Off(0);
		LED_On(1); //Orange LED		
		
		delay();		
		
		LED_Off(1);
		LED_On(2); //Red LED
		
		delay();
		
		LED_Off(2);	
		LED_On(3); //Blue LED					
		delay();
		
		LED_Off(3);
		
		delay();
		delay();

		LED_On(0);
		LED_On(1);
		LED_On(2);
		LED_On(3);
		
		delay();		
		
		LED_Off(0);
		LED_Off(1);
		LED_Off(2);
		LED_Off(3);
		
		delay();		
		
	}
}	 



