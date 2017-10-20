#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int zar_at()
{int rastgele;
rastgele=1+(rand() % 6);
return rastgele;
}
void iyi_salla()
{srand(time(NULL));}

int main ()
{
    int i;
iyi_salla();
for(i=1;i<=10;i++)
{
printf("%d. zar %d geldi , %d zar %d. geldi\n",i,zar_at(),i,zar_at());
}
return 0;

}

