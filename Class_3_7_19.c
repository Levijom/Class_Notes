#include <stdio.h>

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
		P1OUT|=0x40;	//Green	ON
		P1OUT&=0xFE;	//Red	OFF
	}
	else{
		P1OUT&=0xBF;	//Green	OFF
		P1OUT|=0x01;	//Red	ON
	}
}




/*
Symbolic Constants
These are defines already in <MSPY30.h>
*/

#define BIT0 0x01;			//0000	0001
#define BIT1 0x02;			//0000	0010
#define BIT2 0x04;			//0000	0100
#define BIT7 0x80;			//1000	0000




//to set bit 3

Data|=BIT3;



//clear bit 3		1111	0111

Data|=~BIT3;


//inverse bit 3

Data^=BIT3


//set bit 3 & 5

Data|=(BIT3|BIT5);


//clear bit 3 & 5

Data&=~(BIT3|BIT5);

//

Data^=(BIT3|BIT5);


//Redefine earlier code

#define Red BIT0
#define Green BIT6
#define button BIT3


P1DIR|=(Red|Green);
P1DIR&=~button;
for(;;){
	//check if button pushed
	if((P1IN&button)==0){
		P1OUT|=Green;	//Green	ON
		P1OUT&=~Red;	//Red	OFF
	}
	else{
		P1OUT&=~Green;	//Green	OFF
		P1OUT|=Red;		//Red	ON
	}
}




//Out of sync

P1OUT|=Red;
P1OUT&=~Green;
	delay loop
	P1OUT^=(Red|Green);
	
	

/*
Arrays:
Multiple variables of the SAME type
*/

int A[100];						//Array of 100 integers

int A[5] = {1,2,3,4,5};			//Initialize

int A[5] = {1,2};				//First 2 are initialized, rest initialized to 0

int A[100] = {0};				//All values are initialized to 0

int A[] = {1,2,3,4,5,6};		//array size is 6


/*
Things to keep in mind:
Once array is declared, it's size cannot change
All array elements are placd in consecutive memory locations
Array name = start address
You can NOT declare an array, then later assign it's elements in a {}
*/

int A[s];
A = Array name = Start address
printf("%p",A);

int A[5] = {1,2,3,4,5};
printf("%d %d",A[0],A[4]);		//index 0 to 4
a[1]=20;
a[3]=40;



//Array of 20 ints equal to -1

int A[20];
int i;
for(i=0;i<=19;i++){
	A[i]=-1;
}


//Array of 100 ints equal to 1,2,...,100

int A[100];
int i;
for (i=0;i<=99;i++){
	A[i]=i+1;
}


//another one

for(i=0;i<100;i++){
	printf("%d ",A[i]);
}


//print backward

for (i=99;i>=0;i--){
	printf("%d ",A[i]);
}



//Read 10 ints and store them in an array

int i;
int A[10];
for (i=0;i<=9;i++){
	scanf("%d",&A[i]);
}


//Ad all the array elements

int A[100];
int 1,total=0;
//Fill with random numbers
for(i=0;i<=99;i++)
	A[i]=rand()%11;
for(i=0;i<=99;i++){
	total+=A[i];
}



//print the values at even indices
//print the even values in the array

/*
4 7 12 14 3 1		A[i]
_ _ __ __ _ _

1 2 3  4  5 6		i
*/

//print the values at even indices

int A[100];
int i;
for(i=0;i<=99;i+=2){
	printf("%d",A[i]);
}

//print the even values in the array

int A[100];
int i;
for(i=0;i<=00;i++{
	if(A[i]%2==0)
		printf("%d",A[i]);
}



























