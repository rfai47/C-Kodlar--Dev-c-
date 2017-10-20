 #include<stdio.h>
#include<stdlib.h>
#include<math.h>
//ceil=tavan
//floor=zemin


int main ()

{
	int a=pow(2,5);
int x=25;
printf("%d\n",a);
printf("%d'nin Karekoku %.2f\n",x,sqrt(x));
printf("%d nin %d. kuvveti=%.2f\n",2,3,pow(2,3));
printf("%d nin  mutlak degeri=%.2f\n",-20,fabs(-20));
printf("%.5f nin yukari yuvarlanmis hali=%.2f\n",3.7,ceil(3.7));
printf("%.5f nin asagi yuvarlanmis hali=%.2f\n",3.7,floor(3.7));
printf("sinus %d derece=%.2f\n",30,sin(30*3.14/180));//radyan hali oldugu için pi ile çarpýp180 e boluyoruz
printf("tan %d derece=%.2f\n",45,tan(45*3.14/180));
printf("cos %d derece=%.2f\n",90,cos(90*3.14/180));
printf("Log(%d)=%.2f",10,log(2.71));   //taban sabit olarak  e dir.
	return 0;
}
