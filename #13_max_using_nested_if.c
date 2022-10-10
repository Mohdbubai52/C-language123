#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter first number...");
	scanf("%i",&a);
	printf("enter second number...");
	scanf("%i",&b);
	printf("enter third number...");
	scanf("%i",&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%i is maximum number ",a);
		}
	}
	else if(b>c)
	{
		printf("%i is maximum number",b);
	}
	else
	{
		printf("%i is maximum number",c);

	}
}
