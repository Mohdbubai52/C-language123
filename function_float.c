#include<stdio.h>

float test(float x,char y,int z)
{
	//printf("x = %f\ny = %c\nz = % d",x,y,z);
	char value=y;
	
	printf("y = %d\n",value);
	return x+y+z;
}


int main()
{
	//test(23.45,'t',45);
	
	printf("%f",test(23.45,'t',45));
	
	
	return 0;
}