#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char** argv) {
    char metin[]="C dili ile programlama ogreniyorum";
    char aranan[100];
    printf("Aranan kelime: "); gets(aranan);
    char *sonuc;
    sonuc=strstr(metin,aranan);
    if(sonuc=='\0')
        printf("aranan kelime bulunamadi");
    else
        printf("aranan kelime bulundu");
    
    return (EXIT_SUCCESS);
}

