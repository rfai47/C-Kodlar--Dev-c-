#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main ()

{
	int yanlis=0;
	char metin[150]; char  hedef[150];
	time_t basla,bitir;
	printf("birinci metni giriniz:"); gets(metin);
	int uzunluk=strlen(metin);
	time(&basla);
	printf("ikinci metni giriniz:"); gets(hedef);
	
	time(&bitir);
	
for (int i=0;i<=uzunluk;i++ )
if(hedef[i]!=metin[i])
	{
yanlis++;		
	}



if(yanlis==0)
printf("Metinler Ayni %.2f saniyede yazildi",difftime(bitir,basla));
else
printf("%.2f saniyede %d tane harf yanlis  yazdiniz",difftime(bitir,basla),yanlis);



return 0;	
	
	
}
