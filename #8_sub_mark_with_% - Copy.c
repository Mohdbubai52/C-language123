#include<stdio.h>
int main()
{
	int maths,science,social,hindi,english;
	float percentage,sum;
	
	printf("Enter the marks in sequence....\n");
	
	printf("Enter Maths marks...");
	scanf("%i",&maths);
	
	printf("Enter Science marks...");
	scanf("%i",&science);
	
	printf("Enter Social marks...");
	scanf("%i",&social);
	
	printf("Enter Hindi marks...");
	scanf("%i",&hindi);
	
	printf("Enter English marks...");
	scanf("%i",&english);
	
	sum=hindi+english+maths+social+science;
	percentage=sum/5;
	
	printf("Total percentage of your marks is.....%.2f",percentage);
	return 0;
}
