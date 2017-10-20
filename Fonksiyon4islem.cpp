#include<stdio.h>
#include<stdlib.h>
 
 int cikar(int s1 , int s2)
 {return s1-s2;}
 
 int topla(int s1 , int s2)
 {return s1+s2; }
 
 float bolum (int s1 , int s2)
 {return (float) s1/s2;}
 
 int carpim (int s1 , int s2)
 { return s1*s2; }
 
 int main()
{
  int sayi1,sayi2;
 etiket:
 printf("1. sayiyi giriniz:", sayi1);  scanf("%d",&sayi1); goto etiket; 
 printf("2. sayiyi giriniz:", sayi2);   scanf("%d",&sayi2);
topla(sayi1,sayi2);
	
 printf("sayilarin farki:%d\n", cikar(sayi1,sayi2));
  printf("sayilarin bolumu:%2.2f\n",bolum(sayi1,sayi2));
 
 printf ("sayilarin carpimi:%d\n", carpim(sayi1,sayi2));

 return 0; 
}
