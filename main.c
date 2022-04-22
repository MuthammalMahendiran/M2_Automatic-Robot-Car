
#include <avr/io.h>
#include <util/delay.h>

void delay(void);
void main(void)
{
	for(;;)
	{
	DDRB = 0x81;
	DDRD =0x81;
	
	
		// FORWARD
		PORTB = 0x01;
		PORTD = 0x01;
		delay();
		
		// BACKWARD
		PORTB = 0x80;
		PORTD =0x80;
		delay();
		
		
		//LEFT
		PORTB =0x01;
		PORTD =0x00;
		delay();
		
		//RIGHT
		PORTB =0x00;
		PORTD =0x01;
		delay();
		
		
		//STOP
		PORTB =0x00;
		PORTD =0x00;
		delay();
		
		
	}
}

 void delay(void)
	 
 {
	 
 int i,j;
 for(i=0;i<1000;i++)
 {
     for(j=0;j<1000;j++)
	 {
	 }
	
 }
}
