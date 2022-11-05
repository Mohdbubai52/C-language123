//Create a Food billing system 

#include<stdio.h>
int main()
{
	int user,quantity,choice,total,total_amount=0;
	char a;
	
	restart:
	printf("-------------MENU------------\n");
	printf("1.Pizza               price = 180rs/pcs\n");
	printf("2.Burger              price = 100rs/pcs\n");
	printf("3.Dosa                price = 120rs/pcs\n");
	printf("4.Idli                price = 50rs/pcs\n");

	printf("Plese enter your choice:\n");
	scanf("%d",&user);
//	printf("foodnumber_user=%d\n",user);
	
	switch(user)
	{
		case 1 : printf("You have selected pizza.\n");
				goto Quantity;
				break;
		
		case 2 : printf("You have selected Burger.\n");
				goto Quantity;
				break;
				
		case 3 : printf("You have selected Dosa");
				goto Quantity;
				break;
				
		case 4: printf("You have selected Idli\n");
				goto Quantity;
				break;
				
		default: printf("invalid menu number:\n");
				goto restart;
				break;
				
	}
	Quantity:
	{
		printf("Enter your Quantity :");
		scanf("%d",&choice);
	}
	
	if(user==1)
	{
		total=180*choice;
	}
	else if(user==2)
	{
		total=100*choice;
	}
	else if(user==3)
	{
		total=120*choice;
	}
	else if(user==4)
	{
		total=50*choice;
	}
	
	printf("Amount is= %d\n",total);
	total_amount=total_amount+total;
	printf("total amount = %d\n",total_amount);
	printf("Do you want to place more orders ? Y/n :");
	
	order:
	scanf(" %c",&a);
	if(a=='y' || a=='Y')
	{
	goto restart;
	}
	else if(a=='n' || a=='N')
	{
		printf("Total Amount:%d",total_amount);
	}
	else
	{
		printf("enter Y or N");
		goto order;
	}
	
	return 0;
		
}
