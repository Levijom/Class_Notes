#include <stdio.h>

/*
Functions
use many inputs and returns one result
*/

int myFunction(int x, char ch, float f, double w);
//returns value

double myFunction(void);

void myFunction(int a, int b);

void myFunction(void);

unsigned long long int factorial(int);


/*
Precondition: 	condition parameters must satisfy
				if not satisfied, incorrect result is generated.

Prototype: 		Function declared at the top of the file
*/



//Ex: find the max value amond 2 ints

int max(int a, int b){		//a and b already have values
	if(a>b)
		result = a;
	else result = b;
	return result;
}
//returns type integer as result to whoever calls the function



//Now the whole program;
//Start of code------------------------------------------------------------------------------

#include <stdio.h>
int max(int, int);
int main(){
	int x,y,value;
	scanf("%d %d",&x,&y);
	value = max(x,y);
	printf("The max of %d and %d is %d"x,y,value);
	return 0;
}
int max(int a, int b){
	if(a>b)
		result = a;
	else result = b;
	return result;
}

//End of code--------------------------------------------------------------------------------




//A function that rolls a die

int roll_die(){
	int result;
	result = (rand()%6) +1;
	return result;
}


//Now test by rolling a fr#ck tonne of times

#define N 1000000
int i C1=0, C2=0, C3=0, C4=0, C5=0, C6=0;
for(i=1,i<=N;i++){
	val = roll_die();
	if(val==1) C1++;
	else if(val==2) C2++;
	else if(val==3) C3++;
	else if(val==4) C4++;
	else if(val==5) C5++;
	else if(val==6) C6++;
	
	printf(Probability of 1 is %.21f%%\n",(double)C1/N*100);
	printf(Probability of 2 is %.21f%%\n",(double)C2/N*100);
	printf(Probability of 3 is %.21f%%\n",(double)C3/N*100);
	printf(Probability of 4 is %.21f%%\n",(double)C4/N*100);
	printf(Probability of 5 is %.21f%%\n",(double)C5/N*100);
	printf(Probability of 6 is %.21f%%\n",(double)C6/N*100);
}




//Ex: find the largest of 3 ints

int max3(int a, int b, int c){
	if(a>b && a>c)
		return = a;
	else if(b>a && b>c)
		return = b;
	else 
		return = c;
}





//Ex: Function takes 2 ints and returns average as float

float average(int a, int b){
	float result;
	result = (float)(a+b)/2;
	return result;
}




//Ex: Function takes 2 ints and prints average as float

void average2(int a, int b){
	float average;
	average = (float)(a+b)/2;
	printf("Average is %f",average);
	return;
}




//Now use the average function

int x=4, y=5;
float w;
w = average(x,y);
printf("Average is %f",w);

//Use average2

average2(x,y);






//Header File:

#include <stdio.h>
int F1(int,int);
int F2(char);
void F3(float);
void F4(float);
int main(){
	some stuff
}
The functions themselves

//This is problematic for very large progams

//Instead, create multiple folders;

//--------------
MyLibrary.h
int F1(int,int);
int F2(char);
void F3(float);
void F4(float);
//-------------
MyLibrary.c
The functions themselves
//-------------
MyCode.c
#include <stdio.h>
#include "MyLibrary.h"
int main(){
	some stuff
}
//-------------
Project file:
MyCode.c
MyLibrary.h
MyLibrary.c





















