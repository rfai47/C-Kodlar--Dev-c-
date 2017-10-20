#include<stdio.h>
#include<string.h>

int main () 

{
	FILE *filep;
	char text[256];
	filep=fopen ("yaz.text","w");
	if (filep==NULL)
	{
		printf("Dosya olusturulamadi");
		
	}
	else 
	{
		printf("Birseyler yaz:");
		fgets(text,256,stdin);        /*(standart input*/
		fputs(text,filep);
		printf("Dosyalar yazildi.");
		fclose(filep);
  		
	}
	
	
	
	return 0;
}
