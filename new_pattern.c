#include<stdio.h>
int pattern(int s, int e)
{
    int r,c;
    for (r=s;r<=e;r++)
    {
        for(c=5;c<=r;c++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}


int main()
{
    int start,end;
    printf("enter starting value...");
    scanf("%i",&start);
    printf("enter end value..");
    scanf("%i",&end);
    pattern(start,end);
    return 0;
}