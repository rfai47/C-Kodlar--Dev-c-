#include<stdio.h>
#include<stdlib.h>


int main()

{
	char harfler[7]={"a","b","c","d","e","g","f"};
	
	printf("Ilk elemanin adresi:%X\n",&harfler[0]);
	printf("Ilk elemanin degeri:%c\n",harfler[0]);
	printf("Ikinci elemanin adresi:%X\n",&harfler[1]);
	printf("Ikinci elemanin degeri:%c",harfler[1]);	
	return 0;
	
}
