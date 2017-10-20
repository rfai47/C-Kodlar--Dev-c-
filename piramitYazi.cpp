#include<stdio.h>
#include<stdlib.h>

int main ()

{
	char mesaj[]="z";
	
int sinir=8;
int i,j;
for(j=1;j<14;j++)
{
	for(i=0;i<j;i++)
	printf("%c",mesaj[i]);
	printf("\n");
}
}

