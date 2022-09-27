#include<stdio.h>
int main()
{
	int salary;
	float HRA,DA,grosssalary;
	
	printf("enter  basic salary...",salary);
	scanf("%i",&salary);
	
	if(salary<=10000)
	{
		HRA =salary *0.20;
		DA = salary *0.80;
	}
	else if(salary<=20000)
	{
		HRA = salary *0.25;
		DA = salary *0.90;
	}
	if (salary>20000)
	{
		HRA = salary *0.3;
		DA = salary *0.95;
	}
	 grosssalary= salary + HRA + DA;
        printf("\nHRA of your salary is....%.2f",HRA);
		printf("\nDA of your salary is.....%.2f",DA);
		printf("\nyour basic salary is.....%i",salary);
		printf("\n\nGross salary is.....%.2f",grosssalary);
	return 0;
}
