#include<stdio.h>


int main()
{
	
	int temp;
	int basamak=0;
	int number;
	printf("Enter Number:");
	scanf("%d",&number);
	int first,second,third,fourth,fifth;
	int gecici=number;
	if(number<98760 && number>23)
	{
		basamak=1;
    do {
        gecici=gecici/10;
        basamak++;
        }
        while(gecici>=10);
        
      
		if(basamak==5)
		{
			printf("Number is Five Digit\n");
			temp=number%10;
			number =number/10;
			first=temp;
			temp=number%10;
			number =number/10;
			second=temp;
			temp=number%10;
			number =number/10;
			third=temp;
			temp=number%10;
			number =number/10;
			fourth =temp;
			temp=number%10;
			number =number/10;
			fifth=temp;
			printf("The Fifth digit is : %d\n",fifth);
			printf("The Fourth digit is : %d\n",fourth);
			printf("The Third digit is : %d\n",third);
			printf("The Second digit is : %d\n",second);
			printf("The First digit is : %d\n",first);		
		}
		if(basamak==4)
		{
			printf("Number is Five Digit\n");
			temp=number%10;
			number =number/10;
			first=temp;
			temp=number%10;
			number =number/10;
			second=temp;
			temp=number%10;
			number =number/10;
			third=temp;
			temp=number%10;
			number =number/10;
			fourth =temp;
			printf("The Fourth digit is : %d\n",fourth);
			printf("The Third digit is : %d\n",third);
			printf("The Second digit is : %d\n",second);
			printf("The First digit is : %d\n",first);		
			
			
		}
		if(basamak==3)
		{
			temp=number%10;
			number =number/10;
			first=temp;
			temp=number%10;
			number =number/10;
			second=temp;
			temp=number%10;
			number =number/10;
			third=temp;
			printf("The Third digit is : %d\n",third);
			printf("The Second digit is : %d\n",second);
			printf("The First digit is : %d\n",first);	
		}
		if(basamak==2)
		{
			temp=number%10;
			number =number/10;
			first=temp;
			temp=number%10;
			number =number/10;
			second=temp;
			printf("The Second digit is : %d\n",second);
			printf("The First digit is : %d\n",first);	
			
		}
	}
	else 
	{
		printf("Not in range");
	}
	return 0;
	
}
