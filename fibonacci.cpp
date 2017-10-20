#include<stdio.h>
#include<stdlib.h>


int main ()  {
	
	
	int  ilksayi=1,ikincisayi=1;
	int i;
	
	
	printf("%d\n%d\n",ilksayi,ikincisayi);
	for (i=0;  i<20; i++)
	{
		int amd;
		amd=ilksayi;
		 ilksayi+=ikincisayi;
		 ikincisayi=amd;
		 
		 printf("%d\n",ilksayi);
	}
return 0;

}

