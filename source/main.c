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
	unsigned char tempA = PINA;
	switch(tempA){
	case 0x01:
	case 0x02:
	PORTC = 0x60;
	break;
	case 0x03:
	case 0x04:
	PORTC = 0x70;
	break;
	case 0x05:
	case 0x06:
	break;
	case 0x07
	case 0x08
	case 0x09:
	break;
	case 0x0A
	case 0x0B
	case 0x0C:
	break;
	case 0x0D
	case 0x0E
	case 0x0F:
	break;
	
	}
    }
    return 1;
}
