#include<stdio.h>
#include<stdlib.h>
 
 void degistir(	int a , int b)
{  int temp;
 	temp=b;
 	b=a;
 	a=temp;
 	printf("Fonksiyon icinde a=%d, b=%d\n",a,b);
}
        int main ()
      {
        int a=10, b=5;
 		degistir(a,b);
		printf("Ana makine icinde a=%d, b=%d", a,b);
		return 0;
	  }
