#include<stdio.h>
int main()
{
    int r,c;
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if (r%2!=0)
            {
                printf("A ");
                /* code */
            }
            else{
                printf("B ");
            }
        }
        printf("\n");
    }
    return 0;
}