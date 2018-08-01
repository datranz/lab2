/*
 * lab2pt4.c
 *
 * Created: 8/1/2018 2:49:44 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	DDRA=0x00; PORTA=0xFF;
	DDRB=0xFF; PORTB=0x00;
	DDRC=0xFF;PORTC=0x00;
	
	unsigned temA = 0x00;
	unsigned temB = 0x00;
	unsigned temC = 0x00;
	
    /* Replace with your application code */
    while (1) 
    {
		temA=PINA;
		temB=temA<<4;
		temC=temA>>4;
		PORTB=temB;
		PORTC=temC;		
    }
}

