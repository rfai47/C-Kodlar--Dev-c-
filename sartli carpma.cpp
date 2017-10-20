#include<stdio.h>
#include<stdlib.h>

int main()  {
	
	int s1,s2,sonuc;
	for(s2=1;s2<11;s2++)
    { 
           for(s1=1;s1<11;s1++)
           { 
                sonuc=s2*s1;
                if(s1==3)  continue;
                
                printf("%dX%d=%d\n",s2,s1,sonuc);
        }
printf("-------------------------\n");
    }
 return  0;
}
