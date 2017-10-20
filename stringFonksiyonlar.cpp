#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main ()

{
	char dizi[100],kaynak[50],hedef[50];
//	scanf("%s",&dizi);   scanf yerine aþaðýdaki gibi gets operatörü kullanýlabilir.
	//gets(dizi);   
	//int uzunluk=strlen(dizi);
//	printf("Karakter sayisi:%d",uzunluk);
gets(kaynak);
strcpy(hedef,kaynak);   //strcpy:yani kaynaktakini hedefe kopyala demek 

printf("%s",hedef);
strcat(kaynak,hedef); // string birleþtirme:yani hedefteki stringden kaynaða kopyalýyor ve yeni string kaynakta birleþiyor.
printf("%s\n",kaynak);

	return 0;
	
}
