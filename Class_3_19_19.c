#include <stdio.h>


//Ex: Find the max value in the array

int max_value(int A[], int size){
	int i,max;
	max=A[0];									//int to first element
	for(i=0;i<size;i++){
		if(A[i]>max){
			max=A[i];
		}
	}
	return max;
}



//Ex: return the index of the max value

int max_index(int A[],int size){
	int i,imax;
	imax=0;
	for(i=0;i<size;i++){
		if(A[i]>A[imax]){
			imax=i;
		}
	}
	return imax;
}



//Ex: find the max value in the array

int max_value(int A[],int size){
	int i,maxl;
	index_max=max_index(A,10);
	printf("Max value is %d, located at index %d",A[index_max],index_max);
}



//Ex: search for a key in the array, return the count of how many times the key occurs

int search1(intA[],int size,key){
	int i,counter=0;
	for(i=0;i<size;i++){
		if(A[i]==key)
			counter++;
	}
	return counter;
}



//Ex: return the index of first occurrence of key.  If not found, return -1

int search2(int A[],int size,int key){
	int i,index=-1;
	for(i=0;i<size;i++){
		if(A[i]==key){
			index=i;
			break;
		}
	}
	return index;
}



//Ex: Throw a die a million times & record the stats

int counter[6]={0};
int i, value;
for(i=0;i<1000000;i++){
	value=rand()%6+1;
	counter[value-1]++;
}
for(i=0;i<6;i++){
	printf("Die value %d, probability %.2lf\n",i+1,(double)counter[i]1000000*100);
}



//Ex:

int n=4;
printf("Before: %d",n);
F(n);
printf("After: %d",n);

void F(int x){
	x++;
	printf("From tunction: %d",x);
	return;
}

int A[3]={7,8,9};
for(i=0;i<3;i++)
	printf("%d",A[i]);

F2(A,3);
for(i=0;i<3;i++){
	printf("%d",A[i])
}

void F2(int A[],int size){
	int i;
	for(i=0;i<size;i++){
		A[i]++;
	}
	return;
}























