#include <stdio.h>

//Bubble Sort

#define SIZE 5
int A[SIZE]={5,4,3,2,1};
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



//Selection Sort

#define SIZE 5
int A[SIZE]={5,4,3,2,1};
int i,j,temp;
for(i=0;i<SIZE;i++{
	for(j=i+1;j<SIZE;j++){
		if(A[i]>A[j]){
			temp=A[i];
			A[i]=A[j];
			A[j]=temp;
		}
	}
}



//Insertion Sort

#define SIZE 5
int A[SIZE]={5,4,3,2,1};
int i,j,temp;
for(i=0;i<SIZE;i++){
	temp=A[i];
	j=i-1;
	while(j>=0){
		if(A[j]temp){
			A[j+1]=A[j];
		}
		else break;
		j--;
	}
	A[i+1]=temp;
}



//Merge Sort

#define SIZE 5
int A[SIZe]={5,4,3,2,1};
void merge_sort(int A[], int left, int right){
	int L1,R1,L2,R2;
	L1=left;
	R1=(left+right)/2;
	L2=R1+1;
	R2=right;
	merge_sort(A,L1,R1);
	merge_sort(A,L2,R2);
	merge(A,L1,R1,L2,R2);
	return;
}
while(i<=R1 && j<=R2){
	if(A[i]<A[j]){
		temp[k]=A[i];
		i++;
		k++;
	}
	else{
		temp[k]=A[j];
		j++;
		k++;
	}
}
while(i<=R1){
	temp[k]=A[i];
	i++;
	k++
}
while(j<=R2){
	temp[k]=A[j];
	k++;
	j++;
}
for(i=L1,k=0;i<=R2;i++,k++){
	A[i]=temp[k];
}