#include <stdio.h>
#include <sting.h>

//Strings: Arrays of characters



//Ex:

char str[100];
char str[]="Hello World";
char str[]={'H','i','\0'};
//strings are null-terminated



//nulls can be;

ch=NULL;
ch='\0';
ch=0;



/*
Scanf will only capture the first word in a series
scanf of a string(hello world)
will only capture hello

use get(str) to capture the whole string
*/




//print a string

char str[100]="Computer Programming";
int i;
//1:
printf("%s",str0;
//2: loop
i=0;
while(str[i]!=NULL){
	printf("%c",str[i]);
	i++;
}





//find the length of a string

char str[100]="Computer programming";
int size;
//1: use standard library
#include <string.h>
size=strlen(str);
//2: loop
i=0;
while(str[i]!=NULL){
	i++
}
size=i;





//Ex: Find if 2 strings are identical Case Sensitive

int identical_stringd(char str1[],char str2[]){
	int size,i,result=1,size=strlen(str1);
	for(i=0;i<size;i++){
		if(str1[i]!=str2[1]){
			result=0;
			break;
		}
	}
	return result;
}




//Ex: Find if 2 strings are identical NoT CaSe SeNsItIvE

int compare_chars(char ch1,char ch2){
	if(ch1>='A'&&ch1<='Z')
		ch1+=32;
	if(ch2>='A'&&ch2<='Z')
		ch2+=32;
	if(ch1==ch2) return 1;
	else return 0;
}





//Ex: Find out if a string is a palindrome

int is_pal(char str[]){
	int size,i,j,result=1,size=strlen(str);
	i=0;
	j=size-1;
	while(i<j){
		//call compare_chars function from earlier
		if(str[i]!=str[j]){
			result=0;
			break;
		}
		i++;
		j--;
	}
	return result;
}




//Ex: Phrase palindrome

int is_palin(char str[]){
	int size,i,k=0,result,size=strlen(str);
	int Temp[size+1];
	for(i=0;i<size;i++{
		if(str[i]>='A'&&str[i]<='Z'){Temp[k]=str[i]+32;k++;}
		else if(str[i]>='a'&&str[i]<='z'){Temp[k]=str[i];k++;}
	}
	Temp[k]=NULL;
}
result=is_palin;