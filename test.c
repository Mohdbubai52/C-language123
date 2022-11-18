//17. Write Program use switch statement. Display Monday to Sunday

#include<stdio.h>
int main()
{
	int days;
	printf("enter option between 1to7 to print days....");
	scanf("%i",&days);
	
	switch(days)
	{
		case 1: printf("Today is monday");
		break;
		
		case 2: printf("Today is tuesday");
		break;
		
		case 3: printf("Today is wednesday");
		break;
		
		case 4: printf("Today is thursday");
		break;
		
		case 5: printf("Today is friday");
		break;
		
		case 6: printf("Today is saturday");
		break;
		
		case 7: printf("Today is sunday");
		break;5
		
		default: printf("invailad option try again");
	}
	return 0;
}
