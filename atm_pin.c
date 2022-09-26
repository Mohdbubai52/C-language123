#include <stdio.h>
int main()
{
	int pin=1236;
	printf("Enter ATM Pin.....");
	scanf("%i",&pin);
	
	
	if(pin==1236)
	{
		printf("Welcome User....");
	}
	else
	{
		printf("Invaid pin...");
	}
	return 0;
}
