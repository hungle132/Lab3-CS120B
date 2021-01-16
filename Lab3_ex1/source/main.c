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
unsigned char GetBit(unsigned char x, unsigned char k) {
   return ((x & (0x01 << k)) != 0);
}
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
	val = 0;
	tmpA = PINA;
	tmpB = PINB;
	for(unsigned char i = 0; i < 8 ; i++){
		
		if(GetBit(tmpA,i)){
		val = val + 1;
		}
		
		if(GetBit(tmpB,i)){
		val = val + 1;
		}	
	}
	PORTC = val;

    }
    return 1;
}
