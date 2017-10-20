#include<stdio.h>
#include<stdlib.h>

void degistir(int a, int b)

{
	int temp;
    temp=b;
    b=a;
    a=temp;
    printf("Fonksiyon icinde a=%d b=%d\n", a,b);
    
    
}
int main()
{

int x=10,y=5;
degistir (x,y);
printf("ana program icinde x=%d,y=%d",x,y);

	return 0;
}
