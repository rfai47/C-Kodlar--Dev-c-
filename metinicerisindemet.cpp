#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

int main()

{
	char metin[]="C dili ile programlama ogreniyorum";
	char aranan[100];
	printf("Aranan kelime:");  gets(aranan);
	char *sonuc;
	sonuc=strstr(metin,aranan);
	if(sonuc=='\0')
	printf("aranan kelime bulunamadi:");
	else 
	printf("aranan kelime bulundu.");
	return 0;
}
