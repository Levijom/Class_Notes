#include <stdio.h>
#include <math.h>
#include "file1.h"
#inlcude "file2.h"
int thisIsAGlobalVariable=0;

int max(int,int);
float average(int,int);

int max(int a, int b){
	if (a>b) return a;
	else return b;
}



/*
Sharing Code;
Open source:	file1.h		file1.c
Closed Source:	file1.h		file1.obj
*/



//Ex: Compute greatest common divisor of 2 integers;

for(n=1; min(a,b); n++){
	if(a%n == 0 && b%n == 0)
}


int GCD(int a, int b){
	int result, n, min;
	if(a<b) min=a;
	else min=b;
	for(n=1; n<=min; n++){
		if((a%n == 0) && (b%n == 0){
			result = n;
		}
	}
	return result;
}





/*
Local Variable:
	Can only be used in the function where it is defined
	When the function terminates, these variables are erased
Global Variables:
	Defined outside of any function
	At top of file
	Reccomended to not have very many as they may cause errors
	Can be accessed by all the functions in the same file
Static Variables:
	Defined within a function
	Keeps its value after the function terminates
*/




//Ex: Roll a die

void roll_a_die(int param){
	static int c1=0, c2=0, c3=0, c4=0, c5=0, c6=0, counter=0;
	int n;
	if(param == 0){
		n = (rand()%6)+1;
		counter++;
		if(n==1) c1++;
		else if(n==2) c2++;
		else if(n==3) c3++;
		else if(n==4) c4++;
		else if(n==5) c5++;
		else if(n==6) c6++;
	}
	else if(param==1){
		if(counter==0)
			printf("No results yet!");
		else
			printf("Value 1: %2lf%%\n",(double)c1/counter*100);
	}
}




//Try roll_a_die

for(i=1;i<=1000;i++){
	roll_a_die(0);			//roll the die stats
	if(i%100==0)
		roll_a_die(1);		//prints results at multiple of 100
}





/*
Ex: Grade answers to a quiz
Use (Random number) (Random operation) (Random number)
*/

int get_number(){
	int val;
	val=rand()%10;
	return val;
}

char get_operation(){
	int val;
	val=rand()%4;
	if(val==0) ch='+';
	else if(val==1) ch='-';
	else if(val==2) ch='/';
	else if(val==3) ch='*';
	return ch;
}

int question(){
	int a,b,answer;
	char op;
	a=get_number();
	op=get_operation();
	do{
		b=get_number();
	}while(b==0 && get_operation=='/');
	printf("%d %c %d = ",a,op,b);
	scanf("%d",&answer);
	if(op=='+' && answer=(a+b))
		return 1;
	if(op=='-' && answer=(a-b))
		return 1;
	if(op=='/' && answer=(a/b))
		return 1;
	if(op=='*' && answer=(a*b))
		return 1;
	return 0;
}

int n,num_questions,score;
num_questions=10;
for(n=1;n<=num_questions;n++){
	score += question();
}
printf("Result %d/%d",score,num_questions);