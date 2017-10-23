#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>


  int main()
{
	int GuncelHiz,HedefHiz;
	
	printf("Guncel Hizinizi Giriniz:");
	scanf("%d",&GuncelHiz);
	printf("Hedef Hizinizi Giriniz:");
	scanf("%d",&HedefHiz);
	
	
	if(GuncelHiz<HedefHiz)
	{
		for(int i=GuncelHiz;i<HedefHiz;GuncelHiz++)
		{
		
		printf("%d\n",GuncelHiz);
		 sleep(10);
		
			if(GuncelHiz==HedefHiz)
			{
				break;
				}	
		}
		
	}
	return 0;
	
}
