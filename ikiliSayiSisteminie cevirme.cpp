#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()


{
int sayi;
char ikili[8]={};
char kalan[1];

printf("sayi giriniz:");
scanf("%d",&sayi);
while(sayi>0)
{
	if(sayi%2==0) kalan[0]='0';
	else  kalan[0]='1';
	strncat(ikili,kalan,1); // 1 ikiliye kalandan kaç karakter eklememizi söyledi
	
	
	sayi=sayi/2;
}
strrev(ikili);   //strrec:ikilide ne yaziyorsa tersten başlatıyor.
printf("Sayinin ikili Gösterimi:%s",ikili);
	return 0;
}
