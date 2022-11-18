//to find the leap years between this two...
#include<stdio.h>
int main()
{
    int starting_year,end_year;
    int leapyear;
    printf("Enter the starting year...");
    scanf("%d",starting_year);
    printf("Enter end year..");
    scanf("%d",end_year);

    for(leapyear=starting_year;leapyear<=end_year;leapyear++)
    {
        if(leapyear%4==0)
        {
            printf("leapyears is %d\n",leapyear);
        }
    }
    return 0;
}