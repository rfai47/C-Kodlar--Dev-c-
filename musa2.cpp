
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

 

 
int main(){

	srand(time(NULL));
	int dot=0,i,j;
 double	v1Norm=0,v2Norm=0,normCarpim;
	int v1[20],v2[20];
	int sayac1=0,sayac2=0;
		printf("V1 Vektoru:");
		for (int i=0;i<20;i++)
	{
		
		v1[i]=rand() %10;
	}
	for(int i=0;i<20;i++)
	{
	
		
			printf("%d ,",v1[i]);	
	
	}

	printf("\nV2 Vektoru:");
	for (int i=0;i<20;i++)
	{
		v2[i]=rand() %10;
	}
	for(int i=0;i<20;i++)
	{
	
			printf("%d ,",v2[i]);	
		
	}
	printf("\n\n\nV1+V2 Vektoru:");
		for(int i=0;i<20;i++)
	{
	
			printf("%d ,",v2[i]+v1[i]);	
		
	}
	
	for(int i=0;i<20;i++)
	{
		if(v1[i]!=0)
		{
			sayac1++;
		}
	}
	
	for(int i=0;i<20;i++)
	{
		if(v2[i]!=0)
		{
			sayac2++;
		}
	}
	
	printf("\nV1 L0 Normu:%d\n",sayac1);
	printf("V2 L0 Normu:%d\n",sayac2);
	
	
	
	for(i=0;i<20;i++)
	{
	
			dot+=(v1[i]*v2[i]);
		
	}

	
for(i=0;i<20;i++)
	{
	
			v1Norm+=(v1[i]*v1[i]);
		
	}
	
	
v1Norm =sqrt(v1Norm);
		printf("\nv1norm:%.2f",v1Norm);
for(i=0;i<20;i++)
	{
	
			v2Norm+=(v2[i]*v2[i]);
		
	}
	v2Norm=sqrt(v2Norm);
	printf("\nv2norm:%.2f",v2Norm);

normCarpim=v1Norm*v2Norm;
printf("\nsim(v1,v2):%.2f",(double)dot/normCarpim);
}
