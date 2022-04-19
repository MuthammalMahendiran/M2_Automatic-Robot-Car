*
 * EMBEDDED.c
 *
 * Created: 18-04-2022 08:48:30
 * Author : PERSONAL
 */ 

#define F_CPU 16000000
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB = 0x81;
	DDRD =0x81;
	// initialize port C
	// motors connected across PC0...Pc3
	while(1)
	{
		// FORWARD
		PORTB = 0x01;
		PORTD = 0x01;
		_delay_ms(5000);
		
		// BACKWARD
		PORTB = 0x80;
		PORTD =0x80;
		_delay_ms(5000);
		
		//RIGHT
		PORTB =0x01;
		PORTD =0x00;
		_delay_ms(5000);
		
		//LEFT
		PORTB =0x00;
		PORTD =0x01;
		_delay_ms(5000);
		
		//STOP
		PORTB =0x00;
		PORTD =0x00;
		_delay_ms(3000);
		
	}
	return 0;
}
