#include<stdio.h>
#include<string.h>

struct  adres{
	char mahalle[25];
	char cadde[25];
	char  sokak[25];
	char apartman [25];
	int  apartmanno;
	int daireno;
};
struct ogrenci{
	char ogrenciismi[25];
	char soyismi[25];
	int yasi;
	int telefon;
	int okulnumarasi;
	struct adres mevcut;
}kim;
int main ()  
{

	strcpy(kim.ogrenciismi,"Rifai");
	strcpy(kim.soyismi,"Kuci");
	kim.yasi=18;
	kim.telefon=5383928948;
	kim.okulnumarasi=1611404001;
	strcpy(kim.mevcut.mahalle,"Aksemseddin Mahallesi");
	strcpy(kim.mevcut.cadde,"Halicilar Caddesi");
	strcpy(kim.mevcut.sokak,"Cifte Kumrular Sok.");
	strcpy(kim.mevcut.apartman,"Seda Apt.   ");
	kim.mevcut.apartmanno=26;
	kim.mevcut.daireno=4;
	
	
	printf("Ogrencinin ismi:%s\n",kim.ogrenciismi);
	printf("Ogrencinin Soyismi:%s\n",kim.soyismi);
	printf("Ogrencinin Yasi:%d\n",kim.yasi);
	printf("Ogrencinin Telefon Numarasi:%d\n",kim.telefon);
	printf("Ogrencinin Okul Numarasi:%d\n",kim.okulnumarasi);
	printf("Ogrencinin Adresi:%s   %s  %s  %s No:%d  Daire:%d",kim.mevcut.mahalle,kim.mevcut.cadde,kim.mevcut.sokak,kim.mevcut.apartman,kim.mevcut.apartmanno,kim.mevcut.daireno);
	return 0;
}
