#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	char metin[150];
	char harf;
	int tut=0, i;
	printf("Metin girin");
	gets(metin);
	printf("Bulunacak Harfi girin"); scanf("%c",&harf);
	for(i=0;i<150;i++)
	{
		if(metin[i]==harf) 
		tut+=1;
	}
	printf("%c  harfi %d  defa bulundu",harf,tut);
	return 0;
}
