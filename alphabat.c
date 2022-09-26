#include<stdio.h>
int main()
{
	char value;
	printf("Enter any charaters....",value);
	scanf("%c",&value);
	
	printf("Your charater is...",value);
	
	if(value>='a' && value<='z' || value>='A' && value<='Z')
	{
		printf("the char is alphabat");
		
	}
	else{
		printf("char is not alphbat");
	}
	return 0;
	
}
