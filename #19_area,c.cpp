//19. Write a program of to find out the Area of Triangle, Rectangle and Circle using If Condition.(Must 
//Be Menu Driven) 

#include<stdio.h>
int main()
{
	int width,height,base,radius;
	int options;
	float area;
	printf("enter option between 1to3.....\n");
	printf("option 1 for finding area of triangle\n");
	printf("option 2 for finding area of rectangle\n");
	printf("option 3 for finding area of circle\n");
	scanf("%i",&options);
	
	
	if(options==1)
	{
		
		printf("enter height....");
		scanf("%i",&height);
		printf("enter base....");
		scanf("%i",&base);
		area=0.50*base*height;
		printf("Area of triangle is %0.2f",area);
	}
	else if (options==2)
	{
		
		printf("enter width");
		scanf("%i",&width);
		printf("enter height");
		scanf("%i",&height);
		area=width*height;
		printf("Area of rectangle is %0.2f",area);
	}
	else
	{
		
		printf("enter radius");
		scanf("%i",&radius);
		area=3.14*radius*radius;
		printf("Area of circle is %0.2f",area);
	}
	return 0;
}
