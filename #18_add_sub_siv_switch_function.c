//18. Write a Program of Addition, Subtraction ,Multiplication and Division using Switch case.(Must Be 
//Menu Driven)

#include<stdio.h>
int main()
{
	int num1,num2,options;
	int  Addition, Subtraction ,Multiplication , Division ;
	
	printf("Enter first number....");
	scanf("%d",&num1);
	
	printf("Enter second number.....");
	scanf("%d",&num2);
	
	printf("Option 1 for addition\n");
	printf("Option 2 for subraction\n");
	printf("option 3 for multiplication\n");
	printf("Option 4 for division");
	scanf("%d",&options);
	
	switch (options)
	{
		case 1:
			Addition=num1+num2;
			printf("addition of first and second number is %d",Addition);
			break;
		
		case 2:
			Subtraction=num1-num2;
			printf("Subraction of first and secound number is %d",Subtraction);
			break;
			
		case 3:
			Multiplication=num1*num2;
			printf("Multiplication of first and secound number is %d",Multiplication);
			break;
			
		case 4 :
			Division=num1/num2;
			printf("division of first and secound number is %d",Division);
			break;
			
		default:
			printf("invailad option.....");
	}
	return 0;
}
