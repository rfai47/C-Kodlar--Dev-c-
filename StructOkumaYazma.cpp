#include <stdio.h>
#include <stdlib.h>
struct TEST {
    char ad[20];
    int yas;
    char telefon[10];  //numarayi char da yapmamizin amaci 10 tane den az oldugu icin 10 dan az veya fazla olunca hata verir.
} yazilan,okunan;
 
int main( int argc, const char* argv[] ) {
    FILE *tf;
	printf("Struct'in boyu:%d\n",sizeof(okunan)) ;   
	printf("Ad yas ve telefon girin: ");
    scanf("%s %d %s",&yazilan.ad,&yazilan.yas,&yazilan.telefon);    
    tf = fopen("Test.txt", "w");
    fwrite(&yazilan, sizeof(yazilan),1, tf);
    fclose(tf);
   
    tf = fopen("Test.txt", "r");
    fread(&okunan, 1, sizeof(okunan), tf);
    fclose(tf);
    printf("Isim:%s\r\n", okunan.ad);
    printf("Yas:%d\r\n", okunan.yas);
    printf("Telefon:%s\r\n", okunan.telefon);
}
