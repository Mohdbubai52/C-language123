#include<stdio.h>
int main()
{
	int choice,quantity,amount;
	int choose;
	printf("Price list are follow :-\n");
	printf("1.Pizza     price = 180rs/pcs\n");
	printf("2.Burger    price = 100rs/pcs\n");
	printf("3.Dosa      price = 120rs/pcs\n");
	printf("4.Idli      price = 50rs/pcs\n");
	
	printf("Enter your choice....");

	scanf("%d",&choice);
	printf("\n-------------Menu----------------\n");
	if(choice==1)
	{
		printf("You have selected pizza\n");
		printf("enter your quantity : ");
		scanf("%d",&quantity);
		amount=quantity*180;
		printf("Total amount is = %d",amount);
	}
	else if(choice==2)
	{
		printf("You have selected Burger\n");
		printf("enter your quantity : ");
		scanf("%d",&quantity);
		amount=quantity*100;
		printf("Total amount is = %d",amount);
	}
	else if(choice==3)
	{
		printf("You have selected Dosa\n");
		printf("enter your quantity : ");
		scanf("%d",&quantity);
		amount=quantity*120;
		printf("Total amount is = %d",amount);
	}
	else
	{
		printf("You have selected Idli\n");
		printf("enter your quantity : ");
		scanf("%d",&quantity);
		amount=quantity*50;
		printf("Total amount is = %d",amount);
	}
    return 0;
}
