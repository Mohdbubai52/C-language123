//oop event management system using cpp program
//first using class 

#include<iostream>
using namespace std;
int main()
{
    int event_name;
    printf("***************EVENT MANAGEMENT SYATEM***************\n");
    printf("enter the event name\n");
    printf("1.wedding\n");
    printf("2.marige aniversary\n");
    printf("3.Birthday party\n");
    printf("4.family gathering\n");
    scanf("enter option %d",&event_name);
   
    switch(event_name)
    {
       case 1 :printf("Wedding");
       break;
       case 2 : printf("marige aniversary");
       break;


        
    };
    
    return 0;
}

