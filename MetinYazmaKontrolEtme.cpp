#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>


int main()
{
	char ilk[100],ikinci[100];
	time_t start,end;
	
	printf("Birinci Metni giriniz:");time(&start);
	gets(ilk);
	
	printf("ikinci Metni giriniz:");
	gets(ikinci);
	time(&end);
	if(strcmp(ilk,ikinci))  //strcmp:Metinlerin Farkli olup olmadýgýný kontrol eder
	{
		printf("Metinler Farkli Tekrar kontrol ediniz.");
		
	}
	else 
	printf("Metinler Ayni");


printf("%.2f",difftime(end,start));
	return 0;
}



