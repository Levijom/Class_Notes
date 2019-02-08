#include <stdio.h>
/*
Ex:
0	1	2	...	9
10	11	12	...	19
.
.
.
90	91	92	...	99
*/

for(i=0;i<=9;i++){
	for(j=0;j<=9;j++){
		if(1==0)printf(" ");
		else printf("%d",i);
		printf("%d ",j);
	}
	printf("\n");
}





/*
Use for when # interations is known
Use while for sentinel terminated
*/





/*
Ex:
Output:

Person1:					Person2:				Person3
Pies on day 1	5			Pies on day	1	6
Pies on day 2	6			Pies on day	2	2
Pies on day 3	2			Pies on day	3	3
Pies on day 4	1			Pies on day	4	7
Pies on day 5	5			Pies on day	5	2

Ask 3 people how many pies they baked; 5 days each
*/

int i,j,total1=0,total2=0,total3=0,n;
for(i=1;i<=3;i++){			//Loop over people
	printf("Person %d\n",i);
	for(j=1;j<=5;j++){
		printf("Pies on day %d: ",j);
		scanf("%d",&n);
		if(i==1) total1 +=n;
		else if(i==2) total2 +=n;
		else if(i==3) total3 +=n;
	}
	printf("\n");
	printf("Total of person 1: %d\n",total1);
	printf("Total of person 2: %d\n",total2);
	printf("Total of person 3: %d\n",total3);
	printf("Grand total: %d\n",total1+total2+total3);
}





/*
New Pies Ex:
Ask person how many pies they bake any number of days; end with sentenel
Person may enter -1 to finish days
Use a while loop
*/

int i,total1=0,total2=0,total3=0,n;
for(i=1;i<=3;i++);{
	printf("Person %d\n",i);
	counter=0;
	n=0;
	while(n!=-1){
		printf("Pies on day %d ",counter);
		scanf("%d",&n);
		counter++;
		if(n>0){
			if(i==1) total1+=n;
			else if (i==2) total2 +=n;
			else if (i==3) total3 +=n;
		}
	}
}






// Factorial Expressions!!!!!!!!

int i,n;
unsigned long long int result = 1;
scanf("%d",&n);
for(i=1;i<=n;i++){
	result*=i
}
printf("%d",result);




/*
Ex:
Output:
Enter integer:		3
Factorial(3)		=6
Enter integer:		5
Factorial(5)		=120
.
.
.
Enter integer:		-1
*/

int i,n=0;
while(n!=-1){
	Printf("Enter integer: ");
	scanf("%d",&n);
	if(n>=0){
		unsigned long long int result;
		for(i=1;i<=n;i++){
			result*=i;
		}
		printf("Factorial (%d) = %llu\n\n",result);
	}
}




/*
print fun patterns;
n=5
*
**
***
****
*****

*/

int i,j,n;
scanf("%d",&n);
for(i=1;i<n;i++){
	for(j=1;j<n;j++){
		printf("*");
	}
	printf("\n");
}



/*
n=5
*****
****
***
**
*

*/

int i,j,n;
for(i=1;i<=n;i++){
	for(j=1;j<= n+1-i;i++){
		printf("*");
	}
	printf("\n");
}


/*
n=5
*****
 ****
  ***
   **
    *
	
*/

int i,j,k;
for(i=1;i<=n;i++){
	for(j=1;j<=i-1;j++){
		printf(" ");
	}
	for(j=1;j<=n+1-i;j++){
		printf("*");
	}
	printf("\n");
}






























