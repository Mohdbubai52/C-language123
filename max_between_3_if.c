//max between threenumber
#include<stdio.h>
int main()
{
	int a,b,c;
	
	printf("Enter First number.....",a);
	scanf("%i",&a);
	
	printf("Enter Second number.....",b);
	scanf("%i",&b);
	
	printf("Enter Third number.....",c);
	scanf("%i",&c);
	
	printf("Your number is\n first number=%i\n second number =%i\n third number =%i\n",a,b,c);
	
	if(a>b && a>c)
	{
		printf("\nFirst number is gratter number....");
	}
	else if(b>a && b>c)
	{
		printf("Second number is largest number.....");
	}
	else
	{
		printf("Third number is largest number.....");
	}
}
