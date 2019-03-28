#include <stdio.h>

//Ex: Find if 2 arrays have the same set of numbers (inventory)

#define SIZE 10
int A[SIZE];
int B[SIZE];
int Tag[SIZE];
int i,j,found,result=;
//match A[i]'s in B
for(i=0;i<SIZE;i++){
	found=0;
	for(j=0;j<SIZE;j++{
		if(A[i]==B[j] && Tag[j]==0){
			found=1;
			Tag[j]=1;
			break;
		}
	}
	if(found==0){
		result=0;
	}
}



//Ex: Does an array have unique values?

#define SIZE 10
int A[SIZE];
//check if there is a duplicate of A[i]
for(i=0;i<SIZE;i++){
	found=0;
	for(j=i+1;j<SIZE;j++){
		if(A[i]==A[j]){
			found=1;
			break;
		}
	}
	if(found==1){
		result=0;
		break;
	}
}




//Ex: Reverse an array into another array

#define SIZE 10
int A[SIZE];
int B[SIZE];
for(i=0;j=SIZE-1;i<size;i++;j++)
	B[j]=A[i];
for(i=0;i<SIZE;i++)
	B[SIZE-i]=A[i];



//Ex: Reverse an array

#define SIZE 10
int A[SIZE];
int i,j,temp;
i=o;
while(i<j){
	temp=A[i];
	A[i]=A[j];
	A[j]=temp;
	i++;
	j--;
}




//Bubble Sort

#define SIZE 5
int A[SIZE];
int temp,i,k;
for(k=1;K<=SIZE-1;k++){
	for(i=0;i<=SIZE-2;i++){
		if(A[i]>A[i+1]){
			temp=A[i];
			A[i]=A[i+1];
			A[i+1]=temp;
		}
	}
}
