#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
 struct ogrenci{
 	char isim[20];
 	char soyisim[25];
 	int numara;
 };
void degerAL(struct ogrenci *p)
 {
 	strcpy(p->isim,"AhmetTalhaMuta");
 	strcpy(p->soyisim,"Kuci");
 	p->numara=414;
 
 }
 void goster(struct ogrenci *p)
 {
 	printf("Ogrencinin Bilgileri:\nOgrencinin ismi:%s\nOgrencinin Soyismi:%s\nOgrencinin numarasi:%d",p->isim,p->soyisim,p->numara);
 
 }
 int main ()
 {
 
 	struct ogrenci  ogrenci1 ={"Rifai","Kuci",3274 };
 	
  
 	
 	printf("%s   %s   %d",ogrenci1.isim,ogrenci1.soyisim,ogrenci1.numara);
 	
 	return 0;
 }
