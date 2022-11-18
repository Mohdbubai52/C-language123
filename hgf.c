
#include <stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("enter any three number......");
	
	printf("\nEnter first number->");
	scanf("%i",&a);
	
	printf("\nEnter second number->");
	scanf("%i",&b);
	
	printf("\nEnter third number->");
	scanf("%i",&c);
	
	max = (a>b && a>c) ? a: (b>c)? b:c;
	printf("max number is %i\n",max);
	
	min = (a<b && a<c)? a : (b<c)? b:c;
	printf("min number is %i",min);
	return 0;
}

