#include<stdio.h>
int main()
{
	int units;
	float rupees,add_crg;
	
	printf("Enter the no. of units used ",units);
	scanf("%i",&units);
	
	if(units<=50)//for first 50units
	{
		rupees= 0.50*units;
		printf("\nCost of units consumed is...%.2f",rupees);
	}
	else if(units<=150)//for next 100units
	{
		rupees= 0.75*units;
		printf("\ncost of units consumed is.....%.2f",rupees);
	}
	else if(units<=250)//for next 100units
	{
		rupees = 1.20*units;
		printf("\ncost of units consumed is....%.2f",rupees);
	}
	else //for above 250 units
	{
		rupees = 1.75*units;
		printf("\ncost of units consumed is.....%.2f",rupees);
	}
	
	
	add_crg=rupees*0.20;//addinational charges
	printf("\n\nadinational charges....%.2f",add_crg);
	
	printf("\n\nTotal cost of bill after charging charges.....%.2f",add_crg+rupees);//cost of bill after charges
}
