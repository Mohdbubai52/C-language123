#include<stdio.h>

int Pattern(int s,int e)
{
	int r,c;
	
	for(r=s;r<e;r++)
	{
		for(c=s;c<e;c++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
int main()
{
	int start,end;
	printf("start value :\n");
	scanf("%d",&start);//0
	printf("end value :\n");
	scanf("%d",&end);//3
	Pattern(start,end);// 0 3
	return 0;
}





