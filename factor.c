#include<stdio.h>
int main()
{
	
	int num=50,n; // 1,3,5 ,15
	
	for(n=1;n<=num;n++)
	{
		if(num%n==0)
		{
			printf("%d ",n);
		}
	}
	
	
	return 0;
}