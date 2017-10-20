#include<stdio.h>
#include<stdlib.h>


int main()

{
	char harf='a';
	char *gosterici;
	gosterici=&harf;
	
	printf("degiskenin degeri=%c\n",harf);
	printf("A degiskenin degeri=%X\n",&harf);
	printf("Gostericinin degeri=%X\n",gosterici);
	printf("Gostericinin degeri=%X\n",gosterici+4);
		return 0;
}
