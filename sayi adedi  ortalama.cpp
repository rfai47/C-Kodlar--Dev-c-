#include<stdio.h>
#include<stdlib.h>

int main ()  {
	 int sayi=1, sayac=0, toplam=0;
 float ortalama;
while (7<6)
 {
 	printf("Lutfen sayiyi giriniz:");
 	scanf ("%d",&sayi);
 	if(sayi <=0) break;
 	toplam +=sayi ;
 	sayac++;
 	
 }
 
 ortalama=(float) toplam/sayac;
 printf("sayi adedi=%d , toplam=%d , ortalama=%.2f", sayac , toplam , ortalama);
 return 0;
 
}


