#include<stdio.h>


int main()  
{
	char isim[30];
	FILE *filep=fopen("yeniDosya.txt","a"); //"w"= burada yani write kýsaltmasý w geldi yani dosyaya bir þeyler yazýlacak yada eklenecek..
												//filep yeni dosyanin tutuldugu yerdir. pointerlarla ilgili
											//"a" komutu ise appen anlamýna gelen kaydet yani dosyayý çalýsþtýrdýktan sonra baþka 
											//birþey eklemek istersek eskiside kayýtlý kalýr diðerinin üzerine kalýr..
		printf("Adinizi Giriniz:");  scanf("%s",&isim);
	if (filep==NULL ) //eger dosya bossa 
	{
		printf("Dosya Olusturulamadi\n");
	}
	
	else 
	{
		printf("Dosya Olusturuldu.\n");
		
	}

	fprintf(filep,"%s\n",isim);
	fprintf(filep,"2X2=4\n");
	fclose(filep);
	return 0;
}
