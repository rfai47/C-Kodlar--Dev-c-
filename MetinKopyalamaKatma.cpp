#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()

{
char hedef[100],dizi[100],kaynak[100];
printf("Hedef Metnini Giriniz:");
gets(hedef);
printf("Dizi Metnini Giriniz:");
gets(dizi);
strcpy(kaynak,hedef);
printf("%s\n",kaynak);
strcat(dizi,kaynak);
printf("%s\n",dizi);	
	return 0;
}
