#include<stdio.h>
int main()
{
	int i,n;
	int count=0;
	printf("Enter number....");
	scanf("%i",&n);
	
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			count++;
			
		}
	}
	if(count==2)
	{
		printf("Enter number is prime number");
	}
	else
	{
		printf("Number is not prime number");
	}
	return 0;
}
