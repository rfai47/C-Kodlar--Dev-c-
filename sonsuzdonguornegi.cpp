#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i=1,k=0;
    
    while(1)
    {
        printf("i=%d\n",i++);
        if (i>10) break;
    }
    for(;;)
    {
        printf("k=%d\n",k++);
        if (k>5) break;
    }
    
    return (EXIT_SUCCESS);
}

