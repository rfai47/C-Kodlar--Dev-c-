#include <stdio.h>
#include <stdlib.h>  //binary ekrana yazdigimiz okur fakat metin belgesinde aynýsý yazýlmaz.
int  main ()
{
  FILE *fp;
  int sayi;
  if ((fp=fopen("deneme.text", "w")) == NULL) {
      printf("Dosya acilamadi!\n");
      exit(1);
  }
  printf("Bir tamsayi giriniz: ");
  scanf("%d", &sayi);
 
  if (fwrite(&sayi, sizeof(int), 1, fp) != 1) {
      printf("Yazma hatasi!\n");
      exit(1);
  }
 
  fclose(fp);
 
  if ((fp=fopen("deneme.text", "r")) == NULL) {
      printf("Dosya acilamadi!\n");
      exit(1);
  }
 
  if (fread(&sayi, sizeof(int), 1, fp) != 1) {
      printf("Okuma hatasi!\n");
      exit(1);
  }
 
  printf("Dosyadan okunan degisken degeri: %d", sayi);
  fclose(fp);
 return 0;
}
