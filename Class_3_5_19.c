#include <stdio.h>


/*
Modifying data
Data given by 2-4 bit slots
*/

//set bit 3

data=data|0x08;


//clear bit 3

data=data&0xF7;

data&=0xF7;


//invert bit 3

data=data^0x08;

data|=0x08;






/*
Port 1:

_ _ _ _		_ _ _ _ 
  6    		3     0
  R    		B     G  
  
P1DIR
_ _ _ _		_ _ _ _
  1    		1     1

 
*/

//set bits 0,6 in P1DIR

P1DIR |= 0x41;


//clear (Reset) bit 3 in P1DIR

P1DIR &= 0xF7;



//Turn both LED's on		(Set bits 0,6)

P1OUT|=0x41;


//Turn both LED's off		(Clear bits 0,6)

P1OUT&=oxBE;


//Toggle both LED's			(Invert bits 0,6)

P1OUT^=ox41;


//Inspect bit 3

if((P1IN&0x08)==0) it is pushed;
if((P1IN&0x08)!=0) it is not pushed;





/*
Program that flashes LED's out of sync
*/

#include <MSP430.h>
void main(){
	volitile unsigned int i;		//"volitile" makes the compiler not eliminate the pointless for loop
	WDTCTL=WDTPW|WDTHOLD;	//disable "Watch Dog Timer"
	//set LED's as output
	P1DIR|=ox41;	//set bits 0,6
	//Turn Red (bit 0) ON
	P1OUT|=ox01;
	//Turn Green (bit 6) OFF
	P1OUT&=oxBF;
	//infinite loop
	for(;;){
		//invert both LED's
		P1OUT^=ox41;
		for(i=1;i<=50000;i++);		//this stalls the machine for some time (a delay)
	}
	return;
}



/*
When button is 	Pushed, 	Green 	LED ON (Red		OFF)
				Released	Red 	LED ON (Green	OFF)				
*/

//Set LED as output (bits 0,6)
P1DIR|=ox41;
//set button as input (bit 3)
P1DIR&=oxF7;
//infinite loop
for(;;){
	//check if button pushed
	if((P1IN&0x08)==0){
		! green
		& red
	}
	else{
		& green
		! red
	}
}































