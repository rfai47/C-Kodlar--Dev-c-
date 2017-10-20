#include<stdio.h>
#include<stdlib.h>

int main( )
{
	float Fs,Fnet,F,k,m,g=9.8;
	printf("lutfen Kutle degerini giriniz:"); scanf("%f",&m);
	float N=m*g;
	printf("Surtunme kat sayisini giriniz:"); scanf("%f",&k);
	Fs=k*N;
	printf("Kuvvet degerini giriniz:"); scanf("%f",&F);

	printf("Net Kuvvet:%.2f\n",F-Fs);
	
	
	return 0;
}
