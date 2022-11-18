#include<stdio.h>
int main()
{
    int number,rem,rev=0;
    //for above code rem is reminder number and res is for reverse number
    int n;
    //n is for deplicate or alternatvie number of int numbers
        printf("Enter number");
    scanf("%i",&number);
    n=number;

    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev==number)
    {
      printf("number is pandiom");
    }
    else{
        printf("number is not pandilom");
    }
    
    
}