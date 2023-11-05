#include<stdio.h>      // while loop
void main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    while (a<=30)
    {
        printf("%d",a);
        a=a+1;
    }
}