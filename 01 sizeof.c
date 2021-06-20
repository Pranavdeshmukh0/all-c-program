#include<stdio.h>

int main()
{

    char ch = '\0';
    int no = 55;
    int size = 0;

    size = sizeof(no);

    printf("\n size for integer no is =%d",size);

    printf("\n size for character variable ch is =%d",sizeof(ch));

    printf("\n size for float data type is =%d",sizeof(float));

    printf("\n size for double data type is =%d",sizeof(double));

    return 0;
}
