#include <stdio.h>

//Ex: Print numbers from n to 1 recursively

void P(int n){
	if(n==0) return;		//base case
	else{
		printf("%d ",n):
		p(n-1)
		return;
	}
}



/*
Ex: Print pattern of stars recursively

*****
****
***
**
*

*/

void Pattern(int n){
	if(n==0) return;
	else{
		for(i=1;i<=n;i++) printf("*");
		printf("\n");
		Pattern(n-1);
		return;
	}
}




//Ex: Hanoi Tower

void Hanoi(int n, char origin, char dest, char temp){
	if(n==1) printf("%c --> %c\n",origin,dest);
	Hanoi(n-1,origin,temp,dest);
	printf("%c --> %c\n",origin,dest);
	Hanoi(n-1,temp,dest,origin);
	return;
}



/*
Microcontroller unit (MCU)
contains:
	CPU
	Memory
	In/Output (I/O)
	Timer
	Analog to digital converter
	Digital to analog converter
Our MCU:
	MSP430
	By TI
	16-bit CPU
	Clock 16 mHz
	Memory 2 KB
	RAM 128 Bytes
	Low power applications
		Runs on mA	mW
	2 LED's
	1 button
*/



//Print a number to hex

int a=12;
printf("%x",a);		//prints "C"





/*
Microcontroller:
_ G _ _		B _ _ R		Port 1

_ 1 _ _		0 _ _ 1		P1DIR



*/




























