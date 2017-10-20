#include<stdio.h>
#include<stdlib.h>

void altaltaisimyaz (int tekrarsayisi)
{
	int i;
char  isim[25];
	
	printf("isminizi giriniz:");
	scanf ("%s", &isim );
	
	for (i=1; i<=tekrarsayisi;i++)
	printf("%d %s  \n", i,isim);
}
int main ()  {
	altaltaisimyaz (10);
	return 0;
}
