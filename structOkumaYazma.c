

#include <stdio.h>
#include <stdlib.h>
struct TEST {
    char ad[20];
    int yas;
    char telefon[10];
} yazilan,okunan;

int main( int argc, const char* argv[] ) {
    FILE *tf;
    
    printf("Ad yas ve telefon girin: ");
    scanf("%s %d %s",&yazilan.ad,&yazilan.yas,&yazilan.telefon);    
    tf = fopen("Test.text", "w");
    fwrite(&yazilan, sizeof(yazilan),1, tf);
    fclose(tf);
    
    tf = fopen("Test.text", "r");
    fread(&okunan, 1, sizeof(okunan), tf);
    fclose(tf);
    printf("isim: %s\r\n", okunan.ad);
    printf("Yasi: %d\r\n", okunan.yas);
    printf("Telefon: %s\r\n", okunan.telefon);
}



