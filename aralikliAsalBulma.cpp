

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int sayi;
	int i;
	
	
	for(sayi=10;sayi<1001;sayi++)
	for(i=2;i<sayi;i++)
		{
		if(sayi%i==0){printf("%d sayi asal sayi degildir.\n",i);		}
	
	else 
	printf("%d sayi asal sayidir\n",i);
	}
	
	
	return 0;
	
}
