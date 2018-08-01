/*
 * lab2pt2.c
 *
 * Created: 8/1/2018 1:07:48 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>
// bit-access function
unsigned char SetBit(unsigned char x, unsigned char k, unsigned char b){
	return ( b ? x |(0x01 <<k) : x & ~ (0x01 << k));}
	



int main(void)
{
 DDRA=0x00;	PORTA=0xFF;
 DDRC=0xFF;	PORTB=0x00;

 unsigned char fuel=0x00;
 unsigned char led=0x00;
  
    while (1) 
    {
		fuel=PINA;
		for(unsigned char i=4; i<=7; i++){fuel = SetBit(fuel, i, 0);}
		
		led=0x00;
		if(fuel>=1){led=SetBit(led,5,1);}
		if(fuel>=3){led=SetBit(led,4,1);}
		if(fuel>=5){led=SetBit(led,3,1);}
		if(fuel>=7){led=SetBit(led,2,1);}
		if(fuel>=10){led=SetBit(led,1,1);}
		if(fuel>=13){led=SetBit(led,0,1);}	
		if(fuel<=4){led=SetBit(led,6,1);}
		
		PORTC=led;		
    }
}







