#include<stdio.h>

// int GetValue(int x)
// {
//     printf("input some value");
// 	printf("x = %d",x);
// }

int findMax(int a,int b, int c)
{
//	a=10,b=20,c=30

	printf("max = %d",(a>b && a>c) ? a :  (b>c)?b:c);
}
int main()
{
	int num1,num2,num3;
	
    // printf("inpit some value");
	// GetValue(n1);
	// scanf("%d",&n1);//12
	printf("\nenter three values:\n");
	
	printf("\nEnter value of a:");
	scanf("%d",&num1);//10
	
	printf("\nEnter value of b:");
	scanf("%d",&num2);//20
	
	printf("\nEnter value of c:");
	scanf("%d",&num3);//30
	
	findMax(num1,num2,num3);

	return 0;
}