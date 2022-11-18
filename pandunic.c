#include<stdio.h>
int main()
{
	
	int x;
	
	for(x=1;x<=10;x++)
	{
		
		if(x==3 || x==4 || x==5 || x==6 || x==10)
		{
			continue;
		}
		printf("%i\n",x);
	}
	
	
	return 0;
}