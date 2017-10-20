#include<stdio.h>
#include<stdlib.h>
/*
5 1 4 2 8
1 5 4 2 8 
1 4 5 2 8 
1 4 2 5 8 
1 2 4 5 8  
*/

int main()
{
	int gecici,x,y,dizi[]={5,1,4,2,8,15,7,9,3,105};
	int diziboyutu=sizeof(dizi)/sizeof(int);

	for(x=0;x<diziboyutu-1;x++)
	for(y=x+1;y<diziboyutu-1;y++)
	{
		if( dizi[x]>dizi[y])
		 {
		 	gecici=dizi[y];
		 	dizi[y]=dizi[x];
		 	dizi[x]=gecici;
		 }
	}
	for(y=0;y<diziboyutu;y++)
	printf("%d   ",dizi[y]);
	return 0;
}
