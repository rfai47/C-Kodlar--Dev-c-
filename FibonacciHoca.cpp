#include<stdio.h>
#include<stdlib.h>

int main()
{
	int s1=1;
	int s2=1,s3,i=2,n;
	n=15;
	printf("%d\n%d\n",s1,s2);
	while(i<n)
	{
		s3=s1+s2;printf("%d\n",s3);
		s1=s2;
		s2=s3;
		i++;
	}
	
	
	return 0;
}
