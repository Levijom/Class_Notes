//sizeof gives size of the type or vars in bytes

char a;
int b;
printf("%d, %d\n",sizeof(char),sizeof(a));
//returns 1, 1


printf("%d, %d\n", sizeof(int), sizeof(b));
//returns 4,4


/*
Ex:
counter that's 0 or (+)
*/

unsigned int counter;		// 0 to 4billion
int counter;				// -2billion to 2billion
//unsigned int is better


/*
Integer overflow
int : signed [-2147483648 to +2147483647]
*/

int x;
x = 2147483647;
printf("Test1: %d\ln", n);
//prints the number
x = x+1;
printf("Test2: %d\ln", n);
//prints the wrong number; the number is the same as the previous


//make it ASCII
char ch;
ch = 'a'


//Check if ch is E
if(ch == 'E')
	action;


/*
Check if char is uppercase
A-----Z
65----90
*/

char ch;

if(ch>=65 && ch<=90)
	printf("Capital");

if(ch>='A' && ch<='Z')
	printf("Capital");


//What is ASCII of #

char ch='#';
printf("The ASCII number of %c is %u", ch, ch);


//Convert to uppercase

char ch;
printf("Enter a lowercase char");
scanf("%c, &ch);
ch = ch-32;
printf("The uppercase is %c",ch);


//backspace \b

printf("12345");		//12345_
printf("\b\b\b");		//12_3_45
printf("X");			//12X_4_5


//Boolean var is T/F

#include <stdbool.h>
bool a;
a=0;		//0
a=1;		//1
a=93;		//1


//Ex: 

float x;
x=2.3458;
printf("x = %f", x);		//prints 2.3458

printf("x = %.3f", x);		//prints 2.346 which is 3 digits of accuracy


//Ex:
float x = 2.99999999999999999999;
printf("x = %.20f", x);		//prints 3.00000000000000000000


//Ex:

float x = 2.91254875612532698;
printf("x = %.20f", x);		//prints 2.91254878044128420000


//Ex:

float n = 5.384615;
printf("%f", n);			//prints 5.384615
printf("%.2f", n);			//prints 5.38
printf("%.3f", n);			//prints 5.385
printf("%e", n);			//prints 5.384615e+000


//Ex:
double n = 2.3456;
printf("n=%lf", n);




























