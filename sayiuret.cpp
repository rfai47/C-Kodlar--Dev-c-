#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rand_al(int a)
{return (rand()%a);}
int enb(int sayilar[],int boyut)
{
	int enb=sayilar[0];
	for(int m=0;m<boyut;m++)
	{
		if(sayilar[m]>enb)
		enb=sayilar[m];
	}
return enb;
}
int enk(int sayilar[],int boyut)
{
	int enk=sayilar[0];
	for(int m=0;m<boyut;m++)
	{
		if(sayilar[m]<enk)
		enk=sayilar[m];
	}
return enk;
}

int main()

{


	int i;
	int toplam=0;
	float ortalama=0;
	int boyut;
	printf("boyutuu giriniz:"); scanf("%d",&boyut);
	int dizi[boyut];
	int sayiadedi=0;
	srand(time(NULL));
	
	for(i=0;i<boyut;i++)
	{
		dizi[i]=rand_al(101);
		printf("%4d. Aldiginiz not:%d\n",i+1,dizi[i]);
		sayiadedi++;
		toplam+=dizi[i];
	}
	ortalama=(float)toplam/sayiadedi;
	
	
	
	printf("sayilarin toplami=%d sayilarin ortalamasi=%.2f\n",toplam,ortalama);

	printf("Sayilarin En buyugu=%d sayilarin en kucugu=%d\n",enb(dizi,boyut),enk(dizi,boyut));
	
	
return 0;
}


