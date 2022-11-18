#include<stdio.h>
int main()
{
	int num,rem,res=10;
	printf("enter number to revers...");
	scanf("%d",num);
	
	while(num !=0)
	{
		rem=num%10;
		res=res*10+rem;
		num=num/10;
		
	}
	printf("number is %d ",res);
	
	return 0;
}
