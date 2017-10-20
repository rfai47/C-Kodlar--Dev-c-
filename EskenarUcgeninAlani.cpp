#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


int main()
{
	float a,b,c,h,A;
	printf("Eskenar Ucgenin Bir kenarini Giriniz:");
	scanf("%f",&a);
	c=b=a; 
	h=sqrt((a*a-(c/2)*(c/2)));
	printf("Ucgenin Uzunlugu:%.2f\n",h);
	A=h*a/2;
	printf("Ucgenin Alani:%.2f",A);
	
	
	
	
	return 0;
}
