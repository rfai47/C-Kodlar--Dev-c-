#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
 int main()
 {
 	char as;
 	int s;
 	for(s=0;s<255;s++)
 	{
 		printf("%c",s);
 		if(s%10==0) {printf("\n");
		 }
	 }
 	
 	return 0;
 }
