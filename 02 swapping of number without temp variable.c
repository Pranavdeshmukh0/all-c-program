#include<stdio.h>

int main()
{
    int no1 = 0, no2 = 0;

    printf("\n enter two numbers :");
    scanf("%d%d",&no1,&no2);

    printf("\n values of given number before swap =");
    printf("\n no1 = %d, no2 = %d",no1,no2);
    printf("\n************===============*************");

    no1 = no1+no2;
    no2 = no1-no2;
    no1 = no1-no2;

    printf("\n values of given number after swap =");
    printf("\n no1 = %d, no2 = %d",no1,no2);
    printf("\n************===============*************");

    return 0;

}
