#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the mounth number....",num);
	scanf("%i",&num);
	
	if(num==1)
	{
		printf("Mounth is Jan and days is 31days");
	}
	else if(num==2)
	{
		printf("Mounth is feb and no. of days is 28 or 29");
	}
	else if(num==3)
	{
		printf("Mounth is march and no of days is 31");
	}
	else if(num==4)
	{
			printf("Mounth is april and no of days is 30");
	}
	else if(num==5)
	{
			printf("Mounth is may and no of days is 30");
	}
	else if(num==6)
	{
			printf("Mounth is june and no of days is 31");
	}
	else if(num==7)
	{
			printf("Mounth is july and no of days is 30");
	}
	else if(num==8)
	{
			printf("Mounth is augest and no of days is 31");
	}
	else if(num==9)
	{
			printf("Mounth is sept and no of days is 30");
	}
	else if(num==10)
	{
			printf("Mounth is oct and no of days is 31");
	}
	else if(num==11)
	{
			printf("Mounth is nov and no of days is 30");
	}
	else if(num==12)
	{
			printf("Mounth is dec and no of days is 31");
	}else
	{
		printf("invaled num");
	}
	return 0;
}
