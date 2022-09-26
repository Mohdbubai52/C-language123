//char is upper case or lower case
#include<stdio.h>
int main()
{
	char values;
	
	printf("Enter any char");
	scanf("%c",&values);
	
	printf("Your char is = %c\n",values);
	
	if(values>='a'&& values<='z')
	{
		printf("\nYour char is lowercase char");
	}
	else{
		printf("\nYour char is upper case");
	}
	return 0;
}
