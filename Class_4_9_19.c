#include <stdio.h>
//2D Array
int A[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
/*
prints:
1	2	3	4
5	6	7	8
9	10	11	12
*/

A[i][j]-->(rowsize*i)+j


/*
Output the following;
A[0][0]		A[0][1]		A[0][2]		A[0][3]
1	0		1	1		1	2		1	3
2	0		2	1		2	2		2	3
etc

*/

#define NROWS 3
#define NCOLS 4
for(i=0;i<NROWS;i++){
	for(j=0;j<NCOLS;j++)
		printf("%d",A[i][j]);
	printf("\n");
}






/*
Print;
A[0][0]		A[0][1]		A[0][2]
0	1		1	1		2	1
0	2		1	2		2	2
0	3		1	3		3	3
*/

for(j=0;j<NCOLS;j++){
	for(i=0;i<NROWS;i++){
		printf("%d",A[i][j]);
	}
}




//passing a 2D array to a function (Row size = #cols must be passed)

void print_2D_array(int ncols,int nrows,int A[][ncols]){
	for(i=0;i<nrows;i++){
		for(j=0;j<ncols;j++){
			printf("%d",A[i][j]);
		}
	}
	return;
}





//find diagonals of array top right --> bottom left

#define N 4
int A[N][N]={}
for(i=0;i<N;i++){
	printf("%",A[i][i]);
}
//find diagonals of array top left --> bottom right
for(i=0;i<N;i++){
	printf("%d",A[i][N-1-i]);
}
//find top-right-triangle
for(i=0;i<N;i++){
	for(j=i+1;j<N;j++)
		printf("%d",A[i][j]);
}
//find bottom-left-triangle
for(i=0;i<N;i++){
	for(j=0;j<i-1;j++)
		printf("%d",A[i][j]);
}
//rotate clockwise
for(i=0;i<=NCOLS-1;i++){
	printf("%d",A[0][i]);
}
for(i=1;i<=NROWS-1;i++){
	printf("%d",A[i][NCOLS-1]);
}
for(i=NCOLS-2;i>=0;i==){
	printf("%d",A[NROWS-1][i]);
}
for(i=NROWS-2;i>=1;i--){
	printf("%d",A[i][0]);
}





//add all elements at row i to col j

#define NROWS 4
#define NCOLS j
int add_row_col(int nrows,int ncols,int A[][ncols],int k,result=0,int j){
	int k, result=0;
	for(k=0;k<NCOLS;k++){
		result+=A[i][k];
	}
	for(k=0;k<NROWS;k++){
		result+=A[k][j];
	}
	result-=A[i][j];
}return result;




//swap two rows in 2D array

void swap_rows(int nrowsint ncols,int A[][ncols],int i,int j){
	int k temp;
	for(k=0;k<ncols;k++){
		temp=A[i][k];
		A[i][k]=A[j][k];
		A[j][k]=temp;
	}
	return;
}