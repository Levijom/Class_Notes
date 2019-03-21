#inlude <stdio.h>

/*
Print the following
44	45	46	47
54	55	56	57
64	65	66	67
74	75	76	77
*/

#define size 4
int A[size]={4,5,6,7};
int i,j;
for(i=0;i<size;i++){
	for(j=0;j<size;j++){
		printf("%d%d\t",A[i],A[j]);
	}
	printf("\n");
}



/*
Print the following
44	45	46	47
55	56	57
66	67
77
*/

#define size 4
int A[size]={4,5,6,7};
int i,j;
for(i=0;i<sixe;i++){
	for(j=i;j<size;j++){
		printf("%d%d\t",A[i],A[j]);
	}
	printf("\n");
}



/*
Print the following
45	56	67	78
*/

#define size 5
int A[size]={4,5,6,7,8};
for(i=0;i<size-2;i++){
	printf("%d%d\t",A[i],A[i+1]);
}




/*
Problem type:			Multiple observations leading to  find result of the True/False
Decisive Knowledge:		An observation that immediately leads to the results
						No more info neede
Incremental Knowledge:	Useful, more info needed
*/



//Ex: Do you have a pencil?

result=False
loop over boxes(){
	if(box==pencil){
		result=True:
		Break;
	}
}




//Ex: fin if the array has 2 consecutive values that are equal

#def size 10
int A[size]={...};
int i,result=0;
for(i=0;i<size-2;i++){
	if(A[i]==A[i+1]){
		result=1;
		break;
	}
}




//Ex: Find if all grades in the array are legitimate [0-100]

result=1;
int grades[size];
#define size 100
for(i=0;i<size;i++){
	if(!(grades[i]>=0&&grades[i]<=100)){
		result=0;
		break;
	}
}



//Ex: Find if the arra is sorted in non-descending order (Equal, or inclreasing)

if(A[i]>A[i+1])
	result=0;



//Ex: Find 2 arrays that are identical

int A[size]={};
int B[size]={};
int C[size]={};
for(i=0;i<size;i++){
	if(A[i]!=B[i]){
		result=0;
		break;
	}
}



//Ex: find if 2 arrays contain the same entries

#define size 10
int A[size]={}
int B[size]={}
int i,j,result=1,found;
for(i=0;i<size;i++){
	found=0;
	for(j=0;j<size;j++){
		if(A[i]==B[j]){
			found=1;
			break;
		}
	}
	if(found==0){
		result=0;
		break;
	}
}
if(result==1){
	for(i=0;i<size;i++){
		found=0;
		for(j=o;j<size;j++){
			if(B[i]==A[j]){
				found=1;
				break
			}
		}
		if(found==0){
			result=0;
			break;
		}
	}
}




















