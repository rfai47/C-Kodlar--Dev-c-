#include<stdio.h>
#include<stdlib.h>

int main ()

{
	char harfler[5]={'a','b','c','d','e'};
	int i;
	for(i=0;i<5;i=i+4)
	printf("%c\n",*(harfler+i));
	return 0;
}
