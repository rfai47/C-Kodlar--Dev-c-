#include<stdio.h>
#include<stdlib.h>

float yuzdebul (int sayi, int yuzdesi)

{return sayi*yuzdesi/100;}

int main(){
	printf("200'un yuzde 13'u=%2.2f",yuzdebul(200,13));
	return 0;
}


