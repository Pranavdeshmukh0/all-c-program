#include<stdio.h>

int main()
{
        int a,b,add,sub,mul;
        float div;
        printf("\n\t all arithmetic operation :");
        scanf("%d%d",&a,&b);
        add=a+b;
        sub=a-b;
        mul=a*b;
        div=a/b;
        printf("\n\t addition of %d",add);
        printf("\n\t subtraction of %d",sub);
        printf("\n\t multiplication of %d",mul);
        printf("\n\t division of %f",div);
        return 0;
}
