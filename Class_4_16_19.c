#include <stdio.h>

int A[8]=	{0,	1,	2,	3,	4,	5,	6,	7};
//indexes;	100	104	108	112	116	120	124	128
int *ptr;
ptr = A;
printf("%p",ptr);		//100
ptr++;
printf("%p",ptr);		//104
ptr+=2;
printf("%p",ptr);		//112
		
//to find index of 7
int *ptr2 = &A[7];		//128

int temp;
temp=ptr2-ptr;			//(128-112)/sizeof(int)	=	16/4	=	4

ptr=A;
//these are the same;
printf("%d",A[3]);
printf("%d",ptr+3);
printf("%d",A+3);
printf("%d",ptr[3]);


//sizeof an array vs pointer
int A[8]...
ptr=A;
printf("%d",sizeof(A));		//32 bytes
printf("%d",sizeof(ptr));	//8 bytes




//print an array with a pointer
int A[20]={someelements};
int *ptr = A;
for(i=1;i<20;i++){
	printf("%d",*ptr);
	ptr++;
}
//now ptr is at the end of the array
ptr=A;
for(i=0;i<20;i++){
	printf("%d",(*ptr+i))
}
for(i=0;i<20;i++){
	printf("%d",ptr[i]);
}




//Array that holds "CPU","DISK","COMPUTER","PERIPHERAL"

char words[4][11]={"CPU","DISK","COMPUTER","PERIPHERAL"};
/*
C	P	U	NULL_	_	_	_	_	_	_	
D	I	S	K	NULL_	_	_	_	_	_
C	O	M	P	U	T	E	R	NULL_	_
P	E	R	I	P	H	E	R	A	L	NULL
*/
int i;
for(i=0;i<4;i++){
	printf("%s",&words[i][0]);
}




/*
Problem:	Memory Waste
Solution:	Declare an array of 4 pointers (to string);
*/
char * words[4]={"CPU","DISK","COMPUTER","PERIPHERAL"};
for(i=0;i<4;i++)
	printf("%s",word[i]);





//Malloc:	Dynamic memory allocation
int *ptr;
int n;
printf("How many new integers?");
scanf("%",&n);
ptr=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++){
	ptr[i]=0;
}
free(ptr);




//pointer-to-pointers
int n;
int *ptr;
int **ptr;
n=4;
ptr=&n;
pptr=&ptr;
printf("%d",n);			//4
printf("%d",*ptr);		//4
printf("%d",**pptr);	//4
printf("%p",&n);		//200
printf("%p",ptr);		//200
printf("%p",*pptr);		//200





/*
Function reads a (main) variable (read-only): pass the var by value
Function modifies a (main) var permantntly: pass a pinter to
Function remaps a (main) pointer permanently: Pass a pointer to the pointer
*/

void F(int *pptr, int *bptr){
	*pptr=bptr;
	return;
}

main
int a=4, b=5;
int *ptr=&a;
F(&ptr,&b);




/*
function:
if (n>0)	change n to 0
			point ptr to NULL
		
if (n>0)	multiply n by 2
*/

void F(int **pptr){
	if(**pptr<0){
		**pptr=0;
		*pptr=NULL;
	}
	if(**pptr>0){
		(**pptr)*=2;
	}
}