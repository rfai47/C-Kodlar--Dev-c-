#include<stdio.h>
#include<stdlib.h>
int asalmi(int sayi)
{
	int asal=1; int i;
	for(i=2;i<sayi-1;i++)
	{
		if(sayi% i==0) {asal=5; break;	}
}
	if(asal==1 && sayi!=1) {return 1; } 
	else {return 5;}
	}


int main()
{
	int s;
	
for(s=1;s<=1000;s++)
{
	if(asalmi(s)==1) printf("%d\n",s);
	
}
	return 0;
	
}
