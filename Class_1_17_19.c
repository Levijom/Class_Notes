x = 7; 
y = 2;

//result = 3

f = p * r % q + w / x - y;

/*
in order we have
((p*r)%q)+(w/x)-y
*/


//if statements

if(grade>=65)
	printf("Pass");
if(grade<65)
	printf("Fail");


//relational operators

if(a==b)
	printf();

//"If a is equivalent to b		T or F


If(a!=b)
	printf();

//"If a does not equal b		T or F


if(a==b)
	printf("Variables are equal");

if(a==b){
	printf("Variables are equal");
}

//these two both print the same thing


if(a>b){
	printf("Variables are not equal");
	printf("Variable a is larger");
}

//curly brackets are needed for multiple commands


if(grade>=65)
	printf("Pass");
else 
	printf("fail");


//how hot is it?
if(temp<60)
	printf("It's cold");
else if(temp<85)
	printf("It's cool");
else
	printf("It's Hot");




/*
EX:
Class			min gpa requirement

Engineering		3
Science			2
Psichology		1
*/

int gpa;

if(gpa>=3)
	print("Engineering,Science,Psychology");
else if(gpa>=2)
	printf("Science, Psychilogy");
else if(gpa>=1)
	printf("Psychology");
else
	printf("You are stupid");




/*
EX:
Read an iteger, find how any criteria it meets;
- Positive
- Even
- Multiple of 3
*/






//



//Compound Conditions

//The following tests if cond1 & cond2 is true

if(cond1 && cond2)
	printf();


//The following testes if cond1 OR cond2 is true (or both)

if(cond1 || cond2)
	printf();



//EX: is n between 0 and 10 (inclusive)

if(n>=0 || n<=10)
	printf("n is between 0 and 10");



/*
EX:
Does the user know the password?
3211
1234
9876
*/

int x=3211, y=1234, z=9876;
int n;

scanf("%d", &n);

if(n==x || n==y || n==z)
	printf("You are logged in");
else{
	printf("Exiting...");
	exit(1); //Shuts down the program
}





/*
EX:
Check if x is 1 and y is between 30 & 40
*/

if((x==1) && (y>30 && y<40))
	prinft();




/*
EX:
given temp in C or F;
Print hot if above 30C or above 80F
0=F, 1=C
*/

if((unit==0 && temp>80) || (unit==1 && temp>30))
	print("Its hot");





//Shortcut syntax
var = (condition)? a/*Value if true*/ : b/*Value if false*/;



/*
EX:
rewright the following in shortcut syntax
*/

if(A>=20)
	B=0;
else B+1;

//Is rewritten as

B = (A>=20)?0:1;

//The shortcut is not actually run faster




//(condition)? action-if-ture : action-if-false;


//EX:

if(n>=65)
	printf("Pass");
else 
	printf("Fail");

//Rewritten as

(n>=65)? printf("Pass") : printf("Fail");

















