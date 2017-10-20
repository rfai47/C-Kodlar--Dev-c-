#include<stdio.h>

struct student {

	char isim[15];
	char soyisim[15];
	
	int yas;
	int numara;
};
int main() 
{
	struct student rifai={"Rifai","KUCi",18,1611404001};
	
	
	printf("ogrencinin ismi:%10s\nOgrencinin soyadi:%7s\nOgrencinin Yasi:%7d\nOgrencinin Numarasi: %d",rifai.isim,rifai.soyisim,rifai.yas,rifai.numara);
return 0;}
