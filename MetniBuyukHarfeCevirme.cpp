#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

int main()
{
	char metin[255];
	printf("Cevireceginiz Metni Giriniz:");
	gets(metin);
	
	for(int i=0;i<strlen(metin);i++)
	{
		if(metin[i]>='a' && metin[i]<='z' )
		{
			metin[i]-=32;
			
		}
		else if(metin[i]=='ç')
			metin[i]='Ç';
		else if(metin[i]=='ý')
			metin[i]='I';
		else if(metin[i]=='o')
			metin[i]='O';
		else if(metin[i]=='ü')
			metin[i]=='Ü';
		else if(metin[i]=='þ')
			metin[i]='Þ';	
		}
	
	
	printf("Cevrilen Metin:%s\n",metin);
system("PAUSE");
		
return 0;	
}


