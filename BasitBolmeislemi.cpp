#include<stdio.h>
#include<stdlib.h>

int main()  {
	int t,z ;
	float sonuc;
	printf("birinci sayiyi giriniz:");
	scanf("%d", &t);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&z);
if (z==0 )
printf("ikinci sayi sifir olamaz.");

else 
{ sonuc=(float ) t/z ;
printf("sonuc=%.2f", sonuc);
}
return 0;
}



