#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int buyuk[50],kucuk[50];
	
	int i,sayac=0,toplam=0,f1,f2;
	int sayi,sayi2,ebob;
	printf("sayi giriniz:"); scanf("%d",&sayi);
	printf("sayi giriniz:"); scanf("%d",&sayi2);
	if(sayi<sayi2)
	{
		//sayi deðistirme tekniði
	}
	
	for(i=2;i<sayi;i++)
	{
		if(sayi%i==0)
		{ 
		buyuk[sayac];
		 sayac++;
				 ebob=i;
		}
		 
	}
	for(i=2;i<sayi2;i++)
	{
		if(sayi%i==0)
		{
			kucuk[sayac];
		 sayac++;
		 
		 ebob=i;
		}
		 
	}
	if(sayac==0)
	{
		printf("Asal");
	
	}

else 
printf("Asal degil");
printf("%d\n",sayac);	
	printf("sayinin Ebobu %d\n",ebob);
	for(f1=1;f1<sayi;f1++)
	{
		for(f2=1;f2<sayi2;f2++)
		{
			if(buyuk[f1]==kucuk[f2])
			toplam*=buyuk[f1];
			}
	}

printf("%d ekok",toplam);

	 

	return 0;
}
