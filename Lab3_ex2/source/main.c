/*	Author: lab
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
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's  pins as inputs
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tmpA = 0x00;
	unsigned char lessthan = 0x00;
    /* Insert your solution below */
    while (1) {
	tmpA = PINA;
	if(tmpA == 0x01 || tmpA == 0x02){
		PORTC = 0x20; //100000 sets PC5 to on;
	}
	else if (tmpA == 3 || tmpA == 4){
		PORTC = 0x30; //110000
	}
	else if (tmpA == 5 || tmpA == 6){
		PORTC = 0x38; //111000
	}
	else if (tmpA == 7 || tmpA == 8 || tmpA == 9){
		PORTC = 0x3C; //111100
	}
	else if (tmpA == 10 || tmpA == 11 || tmpA == 12){
		PORTC = 0x3E;
	}
	else if (tmpA == 13 || tmpA == 14 || tmpA == 15){
		PORTC = 0x3F;
	}
	if (tmpA <= 4){
		lessthan = 0x40;
		PORTC = PORTC + lessthan;
	}
    }
    return 1;
}
