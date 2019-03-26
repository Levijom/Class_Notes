#include <stdio.h>

//Homework problems

//Homework 3

//Question 1

int main(void){
	int T,unit;
	printf("Enter unit (1:Farenheit, 2:Celsius) : ");
	scanf("%d",&unit);
	printf("Enter tepmerature: ",&T);
	scanf("%d",&T);
	if(unit==1){
		//Farenheit
		if(T>135)printf("Invalid input!");
		else if(T>=80)printf("The temperature is Hot!");
		else if(T>=65)printf("The temperature is Cool!");
		else printf("The temperature is Cold!");
	}
	else if(unit==2){
		//Celsius
		if(T>57)printf("Invalid input!");
		else if(T>=27)printf("The temperature is Hot!");
		else if(T>=18)printf("The temperature is Cool!");
		else printf("The temperature is Cold!");
	}
	else printf("Invalid input!");
}


//Question 2

int main(void){
	int A=0,B=0,C=0;
	do{
		A++;
		printf("%d ",A);
	}while(A<40);
	printf("\n\n");
	for(B=1;B<=40;B++){
		printf("%d ",B);
	}
	printf("\n\n");
	do{
		if(C%2==0)printf("%d %d ",C,C);
		else printf("%d ",C);
		C++;
	}while(C<=10);
}



//Question 3

int main(void){
	int s,l,small,result=0;
	printf("Enter a small value: ");
	scanf("%d",&s);
	printf("Enter a large value: ");
	scanf("%d",&l);
	if(s>l)printf("Invalid input!");
	else{
		for(small=s;small<=l;small++){
			result+=small;
		}
	printf("The sum of integers between %d and %d is %d",s,l,result);
	}
}




//Question 4

int main(void){
	int box=1,qty,weight,total=0;
	while(weight!=-1){
		printf("Enter weight (lbs) of Type %d box: ",box);
		scanf("%d",&weight);
		if(weight==-1)break;
		printf("Enter quantity: ");
		scanf("%d",&qty);
		total=total+(weight*qty);
		box++;
	}
	printf("The total weight is %d lbs.",total);
}



//Question 5

int main(void){
	int input,i,f1=0,f2=1,f3;
	printf("How many Fobonacci terms? : ");
	scanf("%d",&input);
	for(i=1;i<=input;i++){
		printf("%d ",f1);
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
}



//Ex: Take lower case char, find its order in alphabet

int order_char(char ch){
	if(ch>='a' && ch<='z'){
		result=ch-'a'+1
	}
}