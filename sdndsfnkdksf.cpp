#include<stdio.h>






  	int main()
	{
	int GuncelHiz,HedefHiz;
	
	printf("Guncel Hizinizi Giriniz:");
	scanf("%d",&GuncelHiz);
	printf("Hedef Hizinizi Giriniz:");
	scanf("%d",&HedefHiz);
	
	
	if(GuncelHiz<=HedefHiz)
	{
		while(GuncelHiz<=HedefHiz)
		{
		
			printf("%d\n",GuncelHiz);
	
			GuncelHiz++;
				if(GuncelHiz==HedefHiz)
				{
				printf("Hedef Hiziniza Ulastiniz:");
				}	
		}
	}
	else if(GuncelHiz==HedefHiz)
 		{
 			printf("Guncel Hedef ile Hedef hiziniz Esittir.");
		}	
		 
	else
	  {
	 	printf("Guncel Hiziniz Hedef Hizinizdan Buyuktur.");
	  }	
	
}
