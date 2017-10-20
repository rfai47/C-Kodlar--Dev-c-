#include<stdio.h>

int main ()  
{
	int sayi1=1;
	int sayi2=1;
	int i;
	
	
	printf("%d\n%d\n",sayi1,sayi2);
	
	for(i=0;i<10;i++)
	{
	
		sayi1+=sayi2;
	printf("%d\n ",sayi1+sayi2-1);
	sayi2+=sayi1;
	
	
		
		
	}
	return 0;
}
