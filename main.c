/*
 * part 1.c
 *
 * Created: 8/1/2018 12:33:01 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	DDRA=0x00; PORTA=0xFF;
	DDRB=0x00; PORTB=0xFF;
	DDRC=0xFF; PORTC=0x00;
		
	unsigned char	tnum_a=0x00;
	unsigned char	tnum_b=0x00;
	unsigned char	tnum_c=0x00;
	
    /* Replace with your application code */
    while (1) 
    {
		tnum_a=PINA;
		tnum_b=PINB;
		tnum_c=0x00;
		
	unsigned char	1;
	for (i=15; i>0; i=i--){
		if(tnum_a & 0x01){tnum_c= tnum_c+1;}
		if(tnum_b & 0x01){tnum_c= tnum_c+1;}
		tnum_a>>1;
		tnum_b>>1;
		}
	PORTC=tnum_c;
    }
}

