#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter first number");
	scanf("%i",&a);
	
	printf("Enter second number");
	scanf("%i",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("swap of number a=%i b=%i",a,b);
	return 0;
}
