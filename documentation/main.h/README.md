/**
 * @file calculator_operations.h
 * @author Your Name
 * @brief Header file for Calculator application with Arithmetic operations
 *
 */

#ifndef __MAIN_H__
#define __MAIN_H__

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0x81;
	DDRD =0x81;
/**
* @brief Rotate motor in forward direction
* @param[in] PORTB = 0x01;
* @param[in] PORTD = 0x01;
* @return Result - clockwise direction
*/


/**
* @brief Rotate motor in ackward direction
* @param[in] PORTB = 0x80;
* @param[in] PORTD = 0x80;
* @return Result -anticlockwise direction


/**
* @brief Rotate left motor only
* @param[in] PORTB =0x01;
* @param[in] PORTD =0x00;
* @return Result - rotate left motor,  stop right motor
*/


/**
* @brief  Rotate right motor only
* @param[in] PORTB =0x00;
* @param[in] PORTD =0x01;
* @return Result - rotate right motor, stop left motor 
*/

/**
* @brief   both the motors stop
* @param[in] PORTB =0x00;
* @param[in] PORTD =0x00;
* @return left and right  motor stop
*/


#endif  /* #define __MAIN_H__ */
