#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	int rakam,bulundu=0,i;
	int dizi[]={0,1,2,3,4,5,6,7,8,9};
	printf("Rakam giriniz:"); scanf("%d",&rakam);
	for(i=0;i<10;i++)
	{
		if(rakam==dizi[i])  {
		bulundu=1;	
		printf("%d. sirada bulundu",i+1);
		
		break ;
		}
	}


if(bulundu==0) printf("Aranan rakam bukunumadi");
	return 0;
	
}
