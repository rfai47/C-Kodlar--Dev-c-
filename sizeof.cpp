#include<stdio.h>
#include<stdlib.h>

int main()

{
	
	char ad[]="Mehmet Akif Ersoy Maku";
 	int uzunluk=sizeof(ad);
	int boyut=sizeof(ad);
	int i;
	printf("%d",uzunluk);
	for(i=0;i<boyut;i++)
	printf("%c",*(ad+i));

	
	return 0;
}
