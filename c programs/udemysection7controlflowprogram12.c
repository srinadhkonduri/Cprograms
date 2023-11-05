//program to print first n natural numbers using break statement
#include<stdio.h>
void main()
{
    int i;
    for (i=1;i<=10;i++)
    {
        if (i==6)
        {
            printf("coming out from for loop where i=%d\n",i);
            break;
        }
        printf("%d",i);
    }
} 