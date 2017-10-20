#include<stdio.h>


struct arabalar{
	int tekerleksayisi;
	int vitessayisi;
	int model;
	float motor;
	int beygir;
	
}Mercedes,Audi;

int main()

{
	Mercedes= {4,6,2016,4.0,400};
	Audi     ={6,8,2015,3.7,390};
	printf("Arabanin Tekerlek Sayisi:%d\n",Mercedes.tekerleksayisi);
	printf("Arabanin vites    Sayisi:%d\n",Mercedes.vitessayisi);
    printf("Arabanin modeli   Sayisi:%d\n",Mercedes.model);
    printf("Arabanin  motoru  Sayisi:%.2f\n",Mercedes.motor);
    printf("Arabanin beygiri  Sayisi:%d\n\n\n\n",Mercedes.beygir);
    
    
   	printf("Arabanin Tekerlek Sayisi:%d\n",Audi.tekerleksayisi);
	printf("Arabanin vites    Sayisi:%d\n",Audi.vitessayisi);
    printf("Arabanin modeli   Sayisi:%d\n",Audi.model);
    printf("Arabanin  motoru  Sayisi:%.2f\n",Audi.motor);
    printf("Arabanin beygiri  Sayisi:%d\n",Audi.beygir);
    
    if(Audi.beygir<Mercedes.beygir){
    	printf("Mercedesin Beygiri Daha Fazla:%d",Mercedes.beygir);
	}
    else 
    	printf("Audi Beygiri Daha Fazla:%d",Audi.beygir);
    
    
    return 0;
}


