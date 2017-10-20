#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
 int main()  {
 	
 	int i ;
 	 printf("Kacinci ay?");
 	 scanf("%d", &i);
 switch (i)    { 
             case 1:
    
		
        	printf ("Ocak");
        	printf ("Yilin ilk ayidir.");
	
		    break ;
		    case 2: printf("Subat");    break ;
		    case 3: printf("Mart");   break ;
		    case 4: printf("Nisan");   break ;
		    case 5: printf("Mayis");   break ;
		    case 6: printf("Haziran");   break ;
		    case 7: printf("Temmuz");	break ;	 
		    case 8: printf("Agustus");	break ; 
			case 9: printf("Eylul");    break ;
		  	case 10 :printf("Ekim");	break ;
		   case 11: printf("Kasim");     break ;
		   case 12 : printf("Aralik\n");	
		   printf("yilin sonu");
		   		   break ;
		   
		    
		    default : printf(" o da nesi?");    
	}
getch ();
			return 0;
}
 

