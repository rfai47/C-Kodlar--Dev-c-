#include<stdio.h>
#include<stdlib.h>

int main ()  {
	int sayi;
	printf("Lutfen sayi giriniz:" );
	scanf("%d",&sayi);
	if (sayi<0)
	printf("Negatif.");
	else if(sayi>0)
printf("Pozitiftir.");
else
printf("Sifirdir.");
return 0;

}

