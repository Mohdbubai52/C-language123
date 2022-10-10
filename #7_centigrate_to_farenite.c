#include<stdio.h>
int main()
{
	int centigrade;
	float fahrenheit;
	
	
	printf("enter the number od centigrade should wanted to converted in int....");
	scanf("%i",&centigrade);
	
	
	fahrenheit=centigrade*1.8+32;
	
	printf("the number of centigrade %i is in fahrenheit is %0.2f",centigrade,fahrenheit);
	return 0;
}
