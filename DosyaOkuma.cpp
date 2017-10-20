#include<stdio.h>
#include<string.h>

int main () 

{
	FILE *filep;
	char tampon[256];
	filep=fopen ("yaz.text","r"); //"r" komutu read kýsaltýlmasý yani yaz.text yazýlan ekraný yazdýrýyor.//
	
	if (filep==NULL)
	{
		printf("Dosya acilmadi");
		
	}
	else 
	printf("Dosya acildi");
	{
	
		fgets(tampon,256,(FILE*) filep);        /*(standart input*/
		printf("Okunan Bilgisi:%s",tampon);
		fgets(tampon,256,(FILE*) filep);        /*(standart input*/
		printf("Okunan Bilgisi:%s",tampon);
		fclose(filep);
  		
	}
	
}
	
