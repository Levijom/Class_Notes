
int grade,total = 0,counter = 0;
float average;
grade = 0;		//non-sentenel value so the loop starts
while(grade != -1){
	scanf("%d",&grade);
	//process legit grades only
	if(grade >= 0 && grade <= 100){
		total += grade;
		counter ++;
	}
}
if(counter == 0)
	printf("No data was entered);
else{
	average = (float)total/counter;
	printf("Average is %.3f",average);
}




/*
Do while loop
runs code once then checks conditons to see if it should continue
*/
do{
	things
}while(conditions);



//Reaad (+) ints from user and add them.  Ignore negative values.  Sentenel is -1

int n, total=0;
n=0;	//init. to non sentenel 1,
while(n != -1)
	scanf("%d",&n);
//process legit values only
if(n >= 0)
	total += n;;
}


int n, total=0;
do{
	scanf("%d",&n);
	//legit inputss
if(n >= 0)
	total += n;
}while(n != -1);




//incriment
a=4
printf("%d",a++);		//prints 4
printf("%d",a);			//prints 5



//Ex:
b=7;
printf("%d",++b);		//prints 8
printf("%d",b);			//prints 8




//Ex:
int a=2,b=4;
a=a+(b++);
printf("%d %d",a,b);	//prints 6,5


//Ex:
int a=2,b=4;
a=a+(++b);				//a=7, b=5





//For loop;

for(initialization; condition; incrimentation){
	code
}




//print 1,2,...,99,100
int n;
for(n=1; n<=100; n++)
	printf("%d ",n);


//print 100-->0
int n;
for(n=100;n>=0;n--)
	printf("%d ",n);




//Ex: leave initialization blank
int n=0;
for( ;n<=10,n++)
	code


/*
print:
1	10
2	9
3	8
4	7
5	6
6	5
7	4
8	3
9	2
10	1
*/

for(a=1;b=10;a++,b--)
	printf("%d\t\t%d\n,a,b);

for(a=1;a<=10;a++)
	printf("%d\t\t%d",a,10-a);



//Add all numbers 1-100

for(n=1;n<=100;n++)
	result+=n;




/*
Ex:
Trees produce 1000lb of oranges in first year
Yield grows by 5% annually
Print yield for first 7 years
*/

float yield=1000;
for(n=1;n<=7;n++){
	printf("Year %d: %.2f\n",n,yield);
	yield*=1.05
}




//Standard libraries

#include<math.h>
M_PI		//gives the value of PI		is a numerical approx.




//Ex:

double pow(double base, double exponent);
double sqrt(double n);
double ceil(double n);
double floor(double n);



a = pow(2,10);		//result	1024

n = ceil(2,83);		//result	3

n = floor(2.83);	//result	2


//print with spaces		-----123
int n=123;
printf("%8d",n);

//print spaced behind	123-----
int n=123;
printf("%-8d",n);























