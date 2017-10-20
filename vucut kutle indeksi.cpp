#include<stdio.h>
#include<stdlib.h>
 int main () {
 	int boy_cm, kilo;
 	float vucut_kutle_indeksi,boy_metre;
 	
 	printf("boyunuzu giriniz:");
 	scanf("%d", &boy_cm);
 	printf("kilonuzu giriniz:");
 	scanf ("%d",&kilo);
 	boy_metre=boy_cm/100.0;
 	vucut_kutle_indeksi= kilo/(boy_metre*boy_metre );
 	printf("vucut_kutle_indeksi %3.3f\n",vucut_kutle_indeksi);
 	if(vucut_kutle_indeksi<18.5)
 	printf("zayifsiniz");
    else if (18.5>vucut_kutle_indeksi && 24.9<vucut_kutle_indeksi)
 	printf("normalisiniz ");
 	else if  (24.9>vucut_kutle_indeksi && 29.9<vucut_kutle_indeksi )
 	printf("Fazla kilolusunuz.");
 	else 
 	printf("obezin onde gidenisiniz.");
 	return 0;
 }
