/*
The cast operator
Converts var's data types for purpose of one operation only
*/

//Ex:

int a=4, b=5;
float n;

n = (a+b)/2;		printf("Result is %f",n);		//prints 4.00000000...

n = (float)(a+b)/2;



/*
Ex:
Population of earth is about 7 Billion
project growth for next 3 years, +1.5% increase yearly
*/

unsigned long long int n=7000000000;
n=n*1.015;
printf("Year+1: %llu",n);
n=n*1.015;
printf("Year+2: %llu",n);
n=n*1.015;
printf("Year+3: %llu",n);
	

	
	
// While loops

while(condition){
	code
}
//if conditions are false code does not start




//Ex:

int x = 1;
while(x<=100){
	printf("%d ",x);
	x=x++;
}

/*
What if you dont put a space?
	no good
What if we forgot to incriment?
	Infinite loop
*/



//print x+2

int x=0;
while(x<=100){
printf("%d ",x);
x=x+2;
}




//Ex: read 10 grades an compute the average;

int counter=1,sum=0,grade;
float average;
while(counter<=10){
	printf("Enter grade: ");
	scanf("%d",&grade);
	sum=sum+grade;
	counter=counter+1;
}
average=(float)sum/10;
printf("The average is %.2f",average);





//other example

int grade=0,sum=0,counter=0;
float average;
while(grade!=-1){
	printf("Enter grade: ");
	scanf(%d",&grade);
	if(grade!=1){
		sum=sum+grade;
		counter=counter++;
	}
}

















