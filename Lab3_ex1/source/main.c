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
DDRB = 0x00; PORTB = 0xFF; // port B as inputs;
DDRC = 0xFF; PORTC = 0x00;

unsigned char tmpA = 0x00;
unsigned char tmpB = 0x00;
unsigned char val = 0x00;
    /* Insert your solution below */
    while (1) {
	
	for(unsigned int i = 0; i < 8 ; i++){
		tmpA = GetBit(PINA,i);
		if(tmpA == 1){
		val = val + 1;
		}
		tmpB = GetBit(PINB,i);
		if(tmpB == 1){
		val = val + 1;
		}	
	}
	PORTC = val;

    }
    return 1;
}
