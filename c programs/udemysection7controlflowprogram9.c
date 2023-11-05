// program to print a pyramid using while loop
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("enter n");
    scanf("%d",&n);
    i=1;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    
}