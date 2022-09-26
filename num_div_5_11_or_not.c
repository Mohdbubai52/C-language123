//number divisable by 11 5 or not
#include<stdio.h>
int main()
{
	int num1;
	printf("Enter any number....",num1);
	scanf("%i",&num1);
	
	if(num1%11==0)
	{
		printf("number is Divisable by 11");
	}
	else if(num1%5==0)
	{
		printf("number is divisable 5");
	}
	else
	{
		printf("Your number is not divisable by 11 or 5");
	}
	return 0;
}
