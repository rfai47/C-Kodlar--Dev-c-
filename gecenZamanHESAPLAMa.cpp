#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	char ifade[100];
time_t start,end;
time(&start);
printf("ifadeyi giriniz:");
gets(ifade);
time(&end);
printf("%.2f  saniye surdu.\n",difftime (end,start));
	return 0;
}
