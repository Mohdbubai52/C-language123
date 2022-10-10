 /*Write a program user enter the 5 subjects mark. You have to make a total and find the percentage. 
percentage > 75 you have to print “Distinction” percentage > 60 and percentage <= 75 you have to 
print “ Distinction” percentage >50 and percentage <= 60 you have to print “Second class” percentage > 
35 and percentage <= 50 you have to print “Pass class” Otherwise print “Fail*/

#include<stdio.h>
int main()
{
	int hindi,eng,maths,science,gk,total;
	float pc;
	printf("enter hindi marks");
	scanf("%i",&hindi);
	printf("enter english marks");
	scanf("%i",&eng);
	printf("enter gk marks");
	scanf("%i",&gk);
	printf("enter maths marks");
	scanf("%i",&maths);
	printf("enter science marks");
	scanf("%i",&science);
	
	total=eng+hindi+gk+science+maths;
	pc=total/5;
	printf("total marks....%i\n",total);
	printf("percentage %0.2f \n",pc);
	
	if(pc>75)
	{
		printf("You got Distinction");
	}
	else if(pc>60 && pc<=75)
	{
		printf("you got first class marks");
	}
	else if(pc>50 && pc<=60)
	{
		printf("you got second class marks");
	}
	else if(pc>35 && pc<=50)
	{
		printf("you got passing marks");
	}
	else
	{
		printf("you are fail ");
	}

}
