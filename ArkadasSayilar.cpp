#include<stdio.h>
int pozitifBolen(int sayi)
{
	int toplam=0;
	for (int i=1;i<sayi;i++)
	{
		if(sayi%i==0)
		{
			toplam=toplam+i;
		}
		
	}
	return toplam;
}

int main()
{
	int sayi,toplam=0,i,k,x=0;
	
	
printf("Sayi Giriniz:");
	scanf("%d",&sayi);
	


for (i = 1; i < 10000; i++) 
	{ 
        int val = pozitifBolen(i);
    	
	    for (k=1;k<i;k++)
           if(val==k && i==pozitifBolen(k) && sayi==k )
           {
           	printf("%d ile  %d arkadas sayilardir. ",i,sayi);
           	x=1;
		   }
	}
	for (i = 1; i < 10000; i++)
	 { 
        int val = pozitifBolen(i);
        for (k=1;k<i;k++)
           if(val==k && i==pozitifBolen(k) && sayi==i )
           {
           	printf("%d ile  %d arkadas sayilardir. ",sayi,k);
           	x=1;
		   }
         
    }

if(x==0)
{
	printf("%d Sayisinin Arkadas Sayisi Yoktur",sayi);
}

	
			
	return 0;
}
