#include <stdio.h>

//Dnamic alloation of 2D array

int **A;
int nrows, ncols;
scanf("%d%d",&nrows,&ncols);
A=(int**)malloc(nrows*sizeof(int*));
for(i=0;i<nrows;i++){
	A[i]=(int*)malloc(ncols*sizeof(int));
}
for(i=0;i<nrows;i++){
	for(j=0;j<ncols;j++){
		A[i][j]=0;
	}
}
for(i=0;i<nrows;i++){
	free(A[i]);
}
free(A);




//pointers exersizes

//Ex: Function that searches array for a key, returns a pointer to the element that matches the key (main convert pointer to index)

int *search_array(int *A, int size, int key){
	int i;
	int A[];
	for(i=0;i<size;i++){
		if(A[i]==key){
			return &A[i];
		}
	}
	return NULL;
}
int *ptr
ptr=A;
for(i=0;i<size;i++){
	if(*ptr==key){
		returm pts;
	}
	else{
		ptr++;
	}
	return NULL;
}

int A[20]={};
int key=4,index;
int *ptr;
ptr=search_array(A,20,key);
if(ptr==NULL) printf("key not found");
else{
	index=ptr-A;
	printf("key found at index %d",index);
}




//Ex: function swaps the pointers; increment both by 1

void F(int **pptr1, int **pptr2, int *aptr, int *bptr){
	*pptr1=bptr;
	*pptr2=aptr;
	(*aptr)++;
	(*bptr)++;
	return;
}