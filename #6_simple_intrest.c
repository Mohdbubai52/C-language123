#include<stdio.h>
int main()
{
	int amt , time , p;
	float rate;
	printf("Enter the amount should taken....");
	scanf("%i",&amt);
	
	printf("duration of mounths....");
	scanf("%i",&time);
	
	if(amt<=25000)
	{
		rate=0.10;
	}
	else if (amt<=50000)
	{
		rate=0.20;
	}
	else
	{
		rate=0.30;
	}
	
	p=amt*rate*time;
	printf("amt is %i\n",amt);
	printf("rate is %0.2f...\n",rate);
	printf("time is....%i\n",time);
	
	printf("\nsimple intrest if your amt taken is......%i",p);
	return 0;
}
