#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	float TurkceD,TurkceY,MatematikD,MatematikY,SosyalD,SosyalY,FenD,FenY;
	float puan=100;
	float ToplamN;
	int islemler;
	float ygs1,ygs2,ygs3,ygs4,ygs5,ygs6;

	float TurkceN,MatematikN,SosyalN,FenN;
	
	printf("Turkce Dogru Sayisini giriniz:");
	scanf("%f",&TurkceD);
	printf("Turkce Yanlis Sayisini giriniz:");
	scanf("%f",&TurkceY);
	printf("Turkce Bos Sayisi=%.2f\n",40-(TurkceD+TurkceY));
	TurkceN=TurkceD-(TurkceY/4);
	printf("Turkce Net Sayisi:%.2f\n\n\n",TurkceN);
		

	
	printf("Matematik Dogru Sayisini giriniz:");
	scanf("%f",&MatematikD);
	printf("Matematik Yanlis Sayisini giriniz:");
	scanf("%f",&MatematikY);
	printf("Matematik Bos Sayisi=%.2f\n",40-(MatematikD+MatematikY));
	MatematikN=MatematikD-(MatematikY/4);
	printf("Matematik Net Sayisi:%.2f\n\n\n",MatematikN);
	
	printf("Sosyal Bilimler Dogru Sayisini Giriniz:");
	scanf("%f",&SosyalD);
	printf("Sosyal Bilimler Yanlis Sayisini Giriniz:");
	scanf("%f",&SosyalY);
	printf("Sosyal Bilimler Bos Sayisi :%.2f\n",40-(SosyalD+SosyalY));
	SosyalN=SosyalD-(SosyalY/4);
	printf("Sosyal Bilimler Net Sayisi:%.2f\n\n\n",SosyalN);
	
	
	printf("Fen Bilimleri Dogru Sayisini Giriniz:");
	scanf("%f",&FenD);
	printf("Fen Bilimleri Yanlis Sayisini Giriniz:");
	scanf("%f",&FenY);
	printf("Fen Bilimleri Bos Sayisi:%.2f\n",40-(FenD+FenY));
	FenN=FenD-(FenY/4);
	printf("Fen Bilimleri Net Sayisi:%.2f\n\n\n",FenN);
	ToplamN=FenN+MatematikN+TurkceN+SosyalN;
 	printf("Toplam Net Sayisi:%.2f",ToplamN);
	system("PAUSE");
	system("cls");

	printf("Hangi Puan Turunu Ogrenmek istersiniz Seciniz...\n");
	printf("1-YGS1\n2-YGS2\n3-YGS3\n4-YGS4\n5-YGS5\n6-YGS6\n");
	scanf("%d",&islemler);
	switch(islemler)
	{
		
	case 1:
		puan+=(TurkceN*2.000)+(MatematikN*3.999)+(SosyalN*1.001)+(FenN*3.000);
		
		printf("YGS1 Puaniniz:%.4f",puan);
	//	break;
	case 2:
		puan+=(TurkceN*2.000)+(MatematikN*3.000)+(SosyalN*1.001)+(FenN*3.999);
		
		printf("YGS2 Puaniniz:%.4f",puan);
		//break;
	case 3:
		puan+=(TurkceN*3.999)+(MatematikN*2.00)+(SosyalN*3.000)+(FenN*1.001);
		
		printf("YGS3 Puaniniz:%.4f",puan);
		//break;
	case 4:
		puan+=(TurkceN*3.000)+(MatematikN*2.00)+(SosyalN*3.999)+(FenN*1.001);
		
		printf("YGS4 Puaniniz:%.4f",puan);
		//break;
	case 5:
		puan+=(TurkceN*3.700)+(MatematikN*3.300)+(SosyalN*1.999)+(FenN*1.001);
		
		printf("YGS5 Puaniniz:%.4f",puan);
		//break;
	case 6:
		puan+=(TurkceN*3.300)+(MatematikN*3.700)+(SosyalN*1.000)+(FenN*2.000);
		
		printf("YGS6 Puaniniz:%.4f",puan);
	//	break;


	}

	
	
	return 0;}
