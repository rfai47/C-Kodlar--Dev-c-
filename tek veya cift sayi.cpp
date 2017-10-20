#include<stdio.h>
#include<stdlib.h>

 int main () {
 	
 	int sayi;
 	printf("Lutfen sayi giriniz:");
 	scanf("%d", &sayi);
 	if(sayi % 10 == 1)
 {	 	printf("Girilen sayi Tektir.");}
 	else 
{  printf("girilen sayi cifttir.");}
  return 0;
 }
