#include <stdio.h>

/*
remove duplicate rows

use helper functions
	check if 2 rows are the same
	set a row to -1
*/

//finds if 2 rows are identical
int identical_rows(int nrows,int ncols,int A[][ncols],int i,int j){
	int k,result=1;
	for(k=0;k<ncols;k++){
		if(A[i][k]!=A[j][k]){
			result=0;
			break;
		}
	}
	return result;
}
//resets a row to all -1
void reset_row(int nrows,int ncols,int A[][ncols],int i){
	int k;
	for(k=0;k<ncols;k++){
		A[i][k]=-1;
		return;
	}
}
//reset redundant rows
void reset_roes(int nrows,int ncols, int A[][ncols]){
	int i,j;
	for(i=0;i<nrows;i++){
		for(j=i+1;j<nrows;j++){
			if(identical_rows(nrows,ncols,A,i,j)==1)
				reset_row(nrows,ncols,A,j);
		}
	}
	return;
}






/*
Pointer:	A variable that holds an address (of other variables)
*/

int n;
int *ptr;
n=4;
ptr=&n;
printf("n=%d,%d",n,*ptr);				//gives 4,4
printf("Address of n=%p,%p",&n,ptr);	//givs 600,600
n=6;
*ptr=7;




//Ex: passing a variable by reference
void F(int *n){
	(*n)++;
	return;
}
main
	int a=4;
	printf("%d",a);
	F(&a);
	printf("%d",a);





//Ex: function resturs 2 results to main via 2 var passed by reference

void F(int a,int b,int *add,int *sub){
	*add=a+b;
	*sub=a-b;
}return;
main
	int a=4,b=5,add,sub;
	F(a,b,*add,*sub);
	printf("ad=%d,sub=%d",add,sub);
//




//Ex: function takes 2 parameters by referencel makes both equal to the smaller value

void F(int *a,int *b){
	if(*a<*b){
		*b=*a;
	}
	else *a=*b;
	return;
}
main
	int x=2,y=3;
	F(&x,&y);