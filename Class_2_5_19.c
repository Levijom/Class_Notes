#include <stdio.h>
#include <stdlib.h>
#inclue <time.h>

for(n=1;n<=20;n++)
	print("%d",n);



/*
Ex: Print;
*****...*		20 stars
*/

for(n=1;<=20,n++)
	printf("*");


/*
Ex: Print;
*****...*		20 stars
*****...*		20 stars
*****...*		20 stars
*****...*		20 stars
4 times
*/

for(w=1;w<=4;w++){
	for(n=1;<=20,n++){
	printf("*");
	printf("\n");
	}
	
}



//Now do with any width, height, and character

scanf("%d%d%c",&width,height,ch);
for(w=1;w=height;w++){
		for(n=1;<=width,n++){
	printf("%c",ch);
	printf("\n");
	}
}




/*
Random Numbers:
	use func rand() #include <stdlib.h>
	rand() gives a value b/w 0 & RAND_MAX; fo find this value, type printf("%d",RAND_MAX);
	RNG (Random Number Generator) takes 
		With the same seed we get the same numbers
		use seed=time
*/



//Ex: Generate 10 random numbers btw 0 & 20 inclusive;

srand(time(0));			//set seed to time
int i, val;
for(i=0;1<10;i++){
	val=rand()%21;
	printf("%d ",val);
}





/*
Ex: Game
Output
Guess the secret number (0-100)
Enter number: 50
Value is larger!
enter number: 75
Value is smaller!
...
Corret value!
It took n guesses
*/

srand(time(0));
int secret,n,counter=0;
secret=rand()%101;
n=secret+1;					//ensures loop will start
while(secret!=n){
	printf("Enter number: ");
	scanf("%d",&n);
	if(n>secret)
		printf("Value is Smaller!");
	else if(n<secret)
		printf("Value is Larger!");
	else{
		printf("Correct Value!");
		printf("It took %d guess(es)",counter);
		}
}

/*
Break:		Gets out of the nearest enclosing loop
Continue	Immediately goes to the top of the nearest enclosed loop;
			checks the condition & possibly loops again
*/

for(i=0;i<100;i++){
	if(Condition)
		continue;
	if(condition)
		break;
}


//Ex: User has 3 password attempte

int pass=1234,n,i;
for(i=1;i<=3;i++){
	Printf("Password: ");
	scanf("%d",n);
	if(n==pass){
		printf("Ypu are logged in");
		break;
	}
	else if(n!=pass)
		printf("Incorrect! Try again: ");
	if(i==3){
		printf("Program Exiting");
		exit(1);
	}
}


//Another 3 password attempt program;

flag=0;counter=1
do{
	scanf("%d",&n);
	if(n==pass)
		flag=1;
	counter++;
}while(counter<=3 && flag==0);
if(flag==1)
	printf("You are loged in");
else{exit(1);}



//Ask user to enter (+), Even integer

do{
	scanf("%d", &n);
}while(n<0 || n%2!=0)
	


//Ex: Read A & B from user, stop loop when A&B=1

do{
	scanf("%d%d",&a,&b);
}while(!(a==1 && b==1));




/*
Print 10 numbers per line
0	1	2	...	9
10	11	12	...	19
...
90	91	92	...	99
*/

for(n=0;n<=99;n++){
	printf("%2d ",n);
	if(n%10==9)
		printf("\n");
}




//Nested loops

for(x times){
	code 1
	for(y times){
		code 2
	}
	code 3
}
/*
in the code above;
if x=3, y=5;
Code 1 and 3 iterate 3 times
code 2 iterates 15 times
*/




//Trace

for(i=0;i<=2;i++){
	for(j=0;j<=4;j++)
		printf("%d%d",i,j);
	printf("\n");
}
/*
00	01	02	03	04
10	11	12	13	14
20	21	22	23	24
*/