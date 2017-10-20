#include <stdio.h>
#include <stdlib.h>

int main() {
	float sayi;
	printf("bir sayi giriniz= ",sayi);
	scanf ("%f",&sayi);
	sayi*=2 ;   // sayi=sayi*2;
	printf("sayinin 2 kati= %5.2f", sayi);
	sayi/=4;
	printf("sayiyi 4'e bol= %5.2f",sayi);
	return 0;
	
}
