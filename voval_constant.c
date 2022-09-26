//vovals or constant
#include<stdio.h>
int main()
{
	char value;
	
	printf("Enter any character.....");
	scanf("%c",&value);
	
	printf("Your alphabat is=%c\n",value);
	
	if(value=='a'||value=='e'||value=='i'||value=='o'||value=='u')
	{
		printf("Your char is vovals");
	}
	else if(value=='A'||value=='E'||value=='I'||value=='O'||value=='U')
	{
		printf("your char is vovles");
	}
	else
	{
		printf("your char is constant");
	}
	return 0;
}
