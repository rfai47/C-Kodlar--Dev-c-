#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
//Hesap Makinesi programi 
{
	float sayi1,sayi2,taban ,us,delta,a,b,c,Ekok;
	int islemler,i,denklem,d,e;
	
	float yuzde;
	float miktar;
	int gun,ay,yil; 

	int faiz_turu;
	
	printf("Hesaplanmak_isten:\n1.Toplama\n2.Cikarma\n3.Carpma\n4.Bolme\n5.Yuzde Hesaplama\n6.Faiz Hesaplama\n7.Us hesabi\n8.Karekok Bulma\n");
	printf("9.Ikinci dereceden denklemler\n10.Ekok bulma\n11.Ebob Bulma\n");	
	printf("Yapmak istediginiz islemi secin Lutfen:");
	scanf("%d",&islemler);
	switch(islemler)
	{
	case 1: printf("sayi1:");  scanf("%f",&sayi1);
		printf("sayi2:");  
		
		
		
		scanf("%f",&sayi2);
		printf("toplam:%.2f",sayi1+sayi2); break;
	case 2: printf("sayi1:");  scanf("%f",&sayi1);
		printf("sayi2:");  scanf("%f",&sayi2);
		printf("Fark:%.2f",sayi1-sayi2); break;
	case 3: printf("sayi1:");  scanf("%f",&sayi1);
		printf("sayi2:");  scanf("%f",&sayi2);
		printf("Carpimi:%.2f",sayi1*sayi2); break;
	case 4: printf("sayi1:");  scanf("%f",&sayi1);
		printf("sayi2:");  scanf("%f",&sayi2);
		printf("bolum:%.2f",sayi1/sayi2); break;
	case 5: printf("Hesaplayacaginiz sayiyi girin lutfen:");scanf("%f",&sayi1);
		printf("Yuzdeyi girin lutfen:");  scanf("%f",&sayi2);
		printf("istediginiz sayinin yuzdesi:%.2f",sayi1*sayi2/100); break;	
	case 6:printf("1.Gunluk Faiz\n2.Aylik faiz\n3.Yillik faiz\n");
	printf("istediginiz faiz turunu seciniz:"); scanf("%d",&faiz_turu);
	switch(faiz_turu)
	{	
	case 1:printf("miktari giriniz:"); scanf("%f",&miktar);
		printf("faiz yuzdesi giriniz:"); scanf("%f",&yuzde);
		printf("Kac Gun birakmak istersiniz:"); scanf("%d",&gun);
		printf("%d. Gun sonra paraniz:%.2f",gun,gun*miktar*yuzde/3600); 
		break ;
	case 2:printf("miktari giriniz:"); scanf("%f",&miktar);
		printf("faiz yuzdesi giriniz:"); scanf("%f",&yuzde);
		printf("Kac Ay birakmak istersiniz:"); scanf("%d",&ay);
		printf("%d. Ay sonra paraniz:%.2f",ay,ay*miktar*yuzde/1200+miktar);
		break ;
	case 3:printf("miktari giriniz:"); scanf("%f",&miktar);
		printf("faiz yuzdesi giriniz:"); scanf("%f",&yuzde);
		printf("Kac yil birakmak istersiniz:"); scanf("%d",&yil);
		printf("%d .Yil sonra paraniz:%.2f",yil,yil*miktar*yuzde/100+miktar);
	break ;
	
	}
	case 7:  
	
		printf("Us giriniz:");  scanf("%f",&us);
	 	printf("Taban Giriniz:");  scanf("%f",&taban);
		printf("%.2f uzeri %.2f:%.2f",taban,us,pow(taban,us));	
				
		 break;
	case 8:
		
		printf("sayi giriniz:"); scanf("%f",&sayi1);
		printf("%.2f",sqrt(sayi1));  break;
	case 9:
	//ax^2+bx+c
		printf("x^2 katsayisini giriniz:"); scanf("%f",&a);
		printf("x katsayisini giriniz:");    scanf("%f",&b);
		printf("sabit sayiyi giriniz:");  scanf("%f",&c);
	
	printf("1.deltayi bul\n2.kokleri bulunuz\n3.koklerin toplamini bulunuz\n4.koklerin farkini bulunuz\n5.koklerin carpimini bulun\n");	

		printf("yapacaginiz islemi seciniz:"); scanf("%d",&denklem);
		
		switch(denklem){
		
		
		case 1:  
	
		printf("Delta:%.2f",b*b-4*a*c); 
		break;
		
		case 2 :
			delta=b*b-4*a*c;
			if(delta==0)
			printf("x1=x2=%.2f",(-b-sqrt(delta))/2*a);
			else 
			printf("x1=%.2f   x2=%.2f",(-b-sqrt(delta))/2*a,(-b+sqrt(delta))/2*a);
											break ;
		case 3:
		printf("Koklerin toplami:%.2f",-b/a); break;
		
		case 4:
			printf("Koklerin Farkini bulunuz:%.2f",sqrt(delta)/fabs(a));
			
												break;	
			case 5: 
			printf("Koklerin carpimini bulunuz:%.2f",c/a);
			break ;}
			
		case 10: 
				printf("1.sayiyi giriniz:"); scanf("%d",&d);
				printf("2.sayiyi giriniz:"); scanf("%d",&e);	
			
		for (i = 1; i <= d* e; i ++)
        {
          if (i % d == 0 && i % e == 0)
			{
			
					printf("Sayilarin En Kucuk Ortak Boleni:%d",i);
					break ;
		}
			}break ;
			case 11: 
				printf("1.sayiyi giriniz:"); scanf("%d",&d);
				printf("2.sayiyi giriniz:"); scanf("%d",&e);	
			
		for (i=d;i>0;i--)
       		 {
          if (d % i == 0 && e % i == 0)
			{
			
					printf("Sayilarin En Buyuk Ortak Boleni:%d\n",i);
					break ;
			}
			}break ;
			default :
			printf("Oyle bir islem bulunmamaktadir.");break ;
			return 0;
		} }
