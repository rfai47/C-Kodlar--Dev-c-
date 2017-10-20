#include<stdio.h>
#include<stdlib.h>
#include<conio.h>


int main()

{
	FILE *dosya=fopen("Ogrenci Notlari.text","a+");	
	char  ad[25];
	 int  numara;
	 char notu[3];
	 int n,i;
	 printf("Ogrenci sayisini giriniz:"); scanf("%d",&n);
	 if(dosya==NULL)
	 printf("Dosya Olusturulamadi");
	 else 
	 for(i=1;i<=n;i++)
{
	printf("%d-Ogrencinin Adi:",i); scanf("%s",&ad);
	 printf("%d-Ogrencinin numarasi:",i); scanf("%d",&numara);
	 printf("%d-Ogrencinin Notu:",i); scanf("%s",&notu);
	 fprintf(dosya,"%4s %5d %6s\n " ,ad,numara,notu);
printf("bilgiler kaydedildi \a");

}
	
	return 0;
}
