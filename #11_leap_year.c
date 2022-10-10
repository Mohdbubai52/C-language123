#include<stdio.h>
int main()
{
	int starting_year,end_year,leap_year;
	
	printf("Enter starting year...");
	scanf("%i",&starting_year);
	
	printf("Enter ending year");
	scanf("%i",&end_year);
	
	for(leap_year=starting_year;leap_year<=end_year;leap_year++)
{
	if(leap_year%4==0)
	{
		printf("%i\n",leap_year);
	}
}

	return 0;
}
