#include<stdio.h>
#include<stdlib.h>

int dikdortgen(int kisakenar, int uzunkenar){
return 	kisakenar*uzunkenar;
}
int kare (int kenar)
{
	return (kenar*kenar);
}
float daire(int yaricap)
{
	
 return (yaricap*yaricap*3.14);
}
float ucgen(int taban , int yukseklik)
{
	return (taban*yukseklik/2.0);
}
int main()
{
	int s1,s2;
	printf("birinci degeri giriniz=",s1);
	scanf("%d",&s1);
	printf("ikinci degeri giriniz=",s2);
	scanf("%d",&s2);
	printf("karenin alani=%d\n",kare(s1));
	printf("dikdortgenin alani=%d\n",dikdortgen(s1,s2));
	printf("daireniin alani=%2.1f\n",daire(s1));
	printf("ucgenin alani=%2.1f\n",ucgen(s1,s2));
	return 0;
}
