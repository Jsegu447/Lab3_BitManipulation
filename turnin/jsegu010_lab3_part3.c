/*	Author: jsegu010
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0x00;
	DDRC = 0xFF; PORTC = 0x00;

    /* Insert your solution below */
    while (1) {
	unsigned char tempA = PINA & 0x0F ;
	unsigned char checkA = PINA & 0x70;
	unsigned char checkARes;
	if(checkA == 0x30){
		checkARes = 0x80;
	}
	else{checkARes = 0;}
	switch(tempA){
	case 0x01:
	case 0x02:
	PORTC = 0x60 | checkARes;
	break;
	case 0x03:
	case 0x04:
	PORTC = 0x70 | checkARes;
	break;
	case 0x05:
	case 0x06:
	PORTC = 0x38 | checkARes;
	break;
	case 0x07:
	case 0x08:
	case 0x09:
	PORTC = 0x3C | checkARes;
	break;
	case 0x0A:
	case 0x0B:
	case 0x0C:
	PORTC = 0x3E | checkARes;
	break;
	case 0x0D:
	case 0x0E:
	case 0x0F:
	PORTC = 0x3F | checkARes;
	break;
	default:
	PORTC = 0x40 | checkARes;
	break;
	}
    }
    return 1;
}
