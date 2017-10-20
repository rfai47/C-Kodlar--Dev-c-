#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()

{
	time_t start,end;
	char kelimeler[]="gelecek gidecek ve geldi";
	char yaz[250];
	char *sonuc;
	printf("%s\n",kelimeler);
	time(&start);
	gets(yaz);
	printf("ustterki kelimeleri yaz:");
	time(&end);
	sonuc=strstr(kelimeler,yaz);
	if (sonuc=='\0')
	printf("yazdiginiz kelimelerde hata var");
	else 
	
		printf("yazdiginiz kelimeler dogru");
	
printf("%.2f saniyede yazdiniz.",difftime(end,start));
	
	return 0;
}
