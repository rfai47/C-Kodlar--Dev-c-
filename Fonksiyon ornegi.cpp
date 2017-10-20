#include<stdio.h>
#include<stdlib.h>
 
 void Selamm()
 
 {printf("Selamin aleykum hacim\n"); }
 
 int eksilt(int a)
 { 
 a-=20;
 return a;
 }
 int main ()
      {
 	Selamm();
 	printf("sonucumuz=%d\n",eksilt(40));
	return 0; 
	 	}
