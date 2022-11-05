//  Write a program to print the 1 to 10 using For loop

#include<stdio.h>
int main()
{
    int r,c,x=1;
    for(r=1;r<=5;r++)
    {
    	for(c=1;c<=r;c++)
    	{
    		printf("  %i",x++);
		}
		printf(" \n\n");
	}
	return 0;
}
