#include<stdio.h>
int main()
{
	int row,col;
	
	for(row=3;row>=1;row--)//1;1>=1;1--
	{
		for(col=1;col<=row;col++)//1;1<=1;1++
		{
			printf(" ");
		}
		
		for(col=row;col<=3;col++)//1;1<=3;1++
		{
				printf("* ");
		}
		
		printf("\n");
	}
	return 0;
}