#include<stdio.h>
void keyword()
{
    int static  x=1;
    int static y=1;
    printf("x=%d and y=%d\n",x,y);
    x++;
    y++;
    
}
int main()
{
    keyword();
    keyword();
    keyword();
    return 0;
}