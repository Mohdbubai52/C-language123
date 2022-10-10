#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("enter first number");
	scanf("%i",&a);
	printf("Enter secound number");
	scanf("%i",&b);
	printf("Enter third number");
	scanf("%i",&c);
	max=(a>b)?   (a>c)?  a: c :  (b>c)? b: c;
	printf("maximum number is %i",max);
	return 0;
}
