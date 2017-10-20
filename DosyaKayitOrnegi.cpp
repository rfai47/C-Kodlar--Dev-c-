#include<stdio.h>
#include<stdlib.h>

struct ogrenci{
	
	char soyad[25];
	char ad[25];
	int yas; 
	char numara[10];
}ornek;
int main()
{
	
FILE *kayitornegi=fopen("kayit.text","w");
printf("Adinizi Giriniz:"); 
scanf("%s",&ornek.ad);
printf("soyAdinizi Giriniz:"); 
scanf("%s",&ornek.soyad);
printf("yasinizi Giriniz:"); 
scanf("%d",&ornek.yas);
printf("numaranizi giriniz:"); 
scanf("%s",&ornek.numara);

fprintf(kayitornegi,"Adiniz:%4s\nSoyadiniz:%4s\nYasiniz:%4d\nNumaraniz:%s\n",ornek.ad,ornek.soyad,ornek.yas,ornek.numara);
printf("Dosyaya basarili bir sekilde kaydedilmistir.\a\n\n\n\n");
fclose(kayitornegi);
return 0;}

