#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>


int main()

{
	
	char h;
		h='g';
	

	if(isalpha(h))
	printf("Alfabede Vardir.\n");
	else
	printf("Alfabede yoktur.\n");
	if(isalnum('5'))
	printf("alfanumeriktir\n");
	else 
	printf("alfanumerik degildir.\n");
	if(isdigit('5'))
	printf("Rakamdir\n");
	else 
	printf("Rakam degildir\n");
		if(islower('a'))
	printf("Kucuk Harfdir\n");
	else 
	printf("Kucuk harf  degildir\n");
	if(isupper('D'))
	printf("Buyuk Harftir\n");
	else 
	printf("Buyuk Harf degildir\n");	
		if(ispunct(';'))
	printf("Noktalama isaretidir\n");
	else 
	printf("Noktalama isareti degildir\n");
	return 0;
}
