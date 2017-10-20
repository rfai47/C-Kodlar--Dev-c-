#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int sayi_tut(int enfazla)
{
srand(time(NULL));
return 1+(rand()%enfazla);
}
void arttir()
{
	printf("tahmininizi arttiriniz.\n");
}
void azalt()
{
	printf("tahminizi azaltiniz.\n");
}

int main ()
{
	int kullanicigirisi=0;
	int puan=100;
	int hak=0;
	int maksimum;
	int tutulansayi;
	printf("Tahmin Araliginizi Giriniz:");
	scanf("%d",&maksimum);
	tutulansayi=sayi_tut(maksimum);
	while(tutulansayi!=kullanicigirisi)
	{
		hak++;
		puan-=10;
		printf("%d. tahmininiz:",hak);
		scanf("%d",&kullanicigirisi);
		if(kullanicigirisi<tutulansayi)
		{
		arttir();}
			if(kullanicigirisi>tutulansayi)
			{
				azalt();
			}
			
	}
	printf("tebrikler %d. tahminizde Dogru tahmin ettiniz.",hak);
	printf("puanininiz:%d",puan);
	return 0;
}
