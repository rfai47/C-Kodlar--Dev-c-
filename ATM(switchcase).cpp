#include<stdio.h>
#include<stdlib.h>

int main ( ) {
	int islem;
	int bakiye=1000;
	int tutar;
	
	printf("islemler\n1-para cekme\n2-para yatirma\n3-havale\n4-bakiye sorgulama\n5-kart iade\n\n\n\n");
	printf("Yapacaginiz islemi secin:");
	scanf("%d",&islem);
	switch(islem)  {
		case 1: 
		printf("Bakiyeniz:%d\n",bakiye);
		printf("cekeceginiz tutari giriniz:");
		scanf("%d",&tutar);
		if (tutar>bakiye)  {
			printf("Bakiye yetersiz");
		}
		  
		  else {
		  
		  bakiye-=tutar;
		printf("bakiyeniz:%d",bakiye) ;  }  
		break ;
	
	case 2:
			printf("Bakiyeniz:%d\n",bakiye);
		printf("para yatiracaginiz tutari giriniz:");
		scanf("%d",&tutar);
		bakiye+=tutar;
		printf("Bakiyeniz:%d",bakiye);
	break ;
	
	case 3:
			printf("Bakiyeniz:%d\n",bakiye);
	printf("havale yatiracaginiz tutar:");
	scanf("%d",&tutar);
	if (bakiye<tutar){
		printf("Bakiye yetersiz.");
	}
	else {
	
	bakiye-=tutar;
	printf("Bakiyeniz:%d",bakiye);}
	break ;
	
	case 4:  
	printf("Bakiyeniz :%d",bakiye);
	
	break ;
	
	case 5: 
	printf("Kart iade edildi yine bekleriz efendim.");
	
break ;

default :   
printf("Gecersiz islem");
	}
	return 0;
}
