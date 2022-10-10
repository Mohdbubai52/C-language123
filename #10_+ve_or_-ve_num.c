#include<stdio.h>
int main()
{
	int number;
	
	printf("enter any int number...");
	scanf("%i",&number);
	
	if(number>=0)
	{
		printf("number is positive....");
	}
	else
	{
		printf("number is negative");
	}
	return 0;
}
