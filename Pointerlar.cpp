#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char harfler[5]={'a','b','c','d','e'};
	
	printf("ilk elemanin Adresi:%X\n",&harfler); //pointerlar Adres Gösterirken u,Yada X kullanilir.
	printf("ilk eleman:%c\n",harfler[0]);
	printf("ikinci elemanin Adresi:%X\n",&harfler[1]);
	printf("ikinci eleman:%c",&harfler[1]);
	return 0;
}
