#include<stdio.h>
#include<stdlib.h>

int kuvvet_hesapla(int a , int u)
{
	int i,sonuc=1;
	for(i=1; i<=u; i++)
    {
	sonuc*=a ;
	printf("%d %d\n",i,sonuc);
				
	 }	
	return sonuc;
}
	int main()
	{
	int taban,us;

	printf("Taban giriniz:",taban);  
	scanf("%d",&taban);
	printf("Us giriniz:",&us);
	scanf("%d",&us);
	printf("Hesaplana deger:%d",kuvvet_hesapla(taban,us));
	return 0;
    }  
	
