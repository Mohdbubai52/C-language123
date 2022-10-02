#include<stdio.h>
int main()
{
	int base,height;
	float area;
	printf("Enter base of triangle....");
	scanf("%i",&base);
	
	printf("Enter height of your triangle....");
	scanf("%i",&height);
	
	area=0.50*base*height;
	printf("\narea of a triangle is....%.2f",area);
	return 0;
}
