#include<stdio.h>
int main()
{
    int number;
    printf("enter number to check armstrong number");
    scanf("%i",&number);

    if(number*4*4)
    {
        printf("number is armstrong....");

    }
    else{
        printf("Not armstrong...");
    }
    return 0;
}
