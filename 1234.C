// Code for 7 Segment Display Interfacing with 8051 Microcontroller

#include<reg51.h>

unsigned char SetDisplay(unsigned char);

void delay();

sbit a = P3^3;

sbit b = P3^4;

unsigned char c;

unsigned char SetDisplay(unsigned char value)

{

unsigned char segment[]={0xf9,0xa4,0xb0,0x99};

if(value<=4) return segment[value]; else return 0;

}

void delay() // Delay

{

int i;
	for(i=0; i<1000; i++)

i = i + 0;

}

void main(void) // Main Program

{

int turn = 1;

while(1)

{

if(turn==1) //7-Seg Display 0

{

a=0; b=0; c=0;

P1=SetDisplay(c);

turn = 2;

delay();

}

else if(turn==2) //7-Seg Display 1

{

a=1; b=0; c++;

P1=SetDisplay(c);

turn = 3;

delay();

}

else if(turn==3) //7-Seg Display 2

{

a=0; b=1; c++;

P1=SetDisplay(c);

turn = 0;

delay();

}

else//7-Seg Display 3

{

a=1; b=1; c++; 
    
P1=SetDisplay(c);

turn = 1;

delay();

}
}
}