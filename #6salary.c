#include<stdio.h>
int main()
{
	int salary;
	float HRA,DA,gross_salary;

	printf("Enter you salary range  ",salary);
	scanf("%i",&salary);
	

	

	if(salary<=10000)	
	{
		HRA=salary*0.20;
		DA=salary*0.80;
		gross_salary=salary+HRA+DA;
		
		printf("\nHRA of your salary is....%.2f",HRA);
		printf("\nDA of your salary is.....%.2f",DA);
		printf("\nyour basic salary is.....%i",salary);
		printf("\n\nGross salary is.....%.2f",gross_salary);
	}
	else if(salary<=20000)
	{
		HRA=salary*0.25;
		DA=salary*0.90;
		gross_salary=salary+HRA+DA;
		
		printf("\nHRA of your salary is....%.2f",HRA);
		printf("\nDA of your salary is.....%.2f",DA);
		printf("\nyour basic salary is.....%i",salary);
		printf("\n\nGross salary is.....%.2f",gross_salary);
	}
	else
	{
		HRA=salary*0.30;
		DA=salary*0.95;
		gross_salary=salary+HRA+DA;
		
		printf("\nHRA of your salary is....%.2f",HRA);
		printf("\nDA of your salary is.....%.2f",DA);
		printf("\nyour basic salary is.....%i",salary);
		printf("\n\nGross salary is.....%.2f",gross_salary);
	}

	return 0;
}
