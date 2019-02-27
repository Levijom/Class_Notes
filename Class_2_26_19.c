#include <stdio.h>

/*
Recursive Function:		Function that calls it's self
						Keeps calling it's self until it reaches base case
						
Idea:					Reducing a problem to a smaller problem of the same type

When recursive calls are made, context of function grows, is saved on the stack memory
		Stack Memory:	Stores variables "on top" and takes "from top"
*/


//Ex: Factorials; 2*3*4*5*...*n = n! = n(n-1)(n-2)...3*2*1

int factorial(int n){
	if(n==1 || ==0)
		return 1;
	else return n*factorial(n-1);
}



//Ex: Fibonacci

int fib(int n){
	if (n==0) return 0;
	if (n==1) return 1;
	else return fib(n-1)+fib(n-2);
}



//Ex: Fribruaunauchie

int Fib(int small, int large, int n){
	if (n==1) return small;
	else return Fib(large, small+large, n-1);
}



//Ex: Print an integer in reverse

void printReverse (int n){
	int digit;
	if (n==0) return;
	digit=n%10;
	printf("%d ",digit);
	printReverse(n/10);
	return;
}