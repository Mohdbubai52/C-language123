#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter first int value...",a);
	scanf("%i",&a);
	
	printf("Enter second int value...",b);
	scanf("%i",&b);
	
	printf("a=%i    b=%i",a,b);
	
	if(a<b)
	{
		printf("\nMin number is=%i",a);
	}
	else
	{
		printf("\nMin number is=%i",b);
	}
	return 0;
}
