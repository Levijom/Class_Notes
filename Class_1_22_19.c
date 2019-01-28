//nested if

if(condition1){
	action1
	if(condition2){
		action2;
	}
	else{
		action3;
	}
}
else if(condition4){
	action4;
	if(conition5){
		action5;
	}
	else{action6
	}
}

/*
only condition1
action1 & 3

cond1&4
action 1 &3

condition2,4
action 4,6
*/




/*
map from food ID data base

Vegetables;
ID
0	Lettuce
1	Tomato
2	Onion

Meat;
ID
10	Pepperoni
11	Ham
12	Hot Dog
*/

if(ID>=10 && ID<=12){
	printf("meat");
	if(ID==10){
		printf("Pepperoni");
	}
	else if(ID==11){
		printf("Ham");
	}
	else{
		printf("Hot Dog");
	}
}
else if(ID>=0 && ID<=2 ){
	printf("vegetable");
	if(ID==0){
		printf("Lettuce");
		
	}
	else if(ID==1){
		printf("Tomato");
	}
	else{
		printf("Onion");
	}
}
else{
	printf("Unknown");
}






//Switch-Case Statements:

int rate;
printf("Rate the restaurant b/w 1 and 5");
scanf("%d",&rate);
switch(rate){
	case 1: printf("The Restaurant is bad");
	case 2: printf("The Restaurant is below average");
	case 3: printf("The Restaurant is average");
	case 4:
	case 5: printf("The Restaurant id good!");
	default: printf("Invalid choice");
}




/*
DeMorgan's Law
Ex:
Ask user to input a number between 0-10 inclusive
*/

printf("Input a number between 0 and 10");
scanf("%d", &n);
if(n>=0 && n<=10){
	printf("That is a valid input");
}

if(!(n>== && n<=10)){
	printf("That input is invalid");
}

if(n<0 || n>10){
	printf("This test also confirms that your input is invalid");
}






