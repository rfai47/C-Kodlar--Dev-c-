#include<stdio.h>
#include<string.h>



int main()  
{
	int i;
	char veri[25]= "Yazilimagiris.com";
	int uzunluk=strlen(veri);
	FILE *filep=fopen("yeniDosya.text","w");
	
	
	if (filep==NULL )
	{
		printf("Dosya Olusturulamadi");
	}
	
	else 
	{
		for(i<0;i<uzunluk;i++)
		{
			fputc(veri[i],filep);
			printf("Yazilan Karakter:%c\n",veri[i]);
			
		}
		printf("Dosya Basariyla olusturuldu");

	}
		fclose(filep);
	return 0;
}
