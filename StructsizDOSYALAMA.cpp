#include<stdio.h>
#include<stdlib.h>

int main()
{
	char ad[25];
	int yas;
	printf("Adinizi giriniz:"); scanf("%s",&ad);
	
	printf("Yasinizi giriniz:"); scanf("%d",&yas);
	
	FILE *deneme=fopen("kayit.text","a");
	
	fprintf(deneme,"Adiniz:%s\nYasiniz:%d\n\n\n",ad,yas);
	fclose(deneme);
	return 0;
}
