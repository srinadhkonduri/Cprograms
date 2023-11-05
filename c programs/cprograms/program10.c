#include<stdio.h>       //if else condition vote program    
void main()
{
    int a;
    printf("enter the age of the person");
    scanf("%d",&a);
    printf("the age of the person is %d",a);
    if (a>=18)
    {
        printf("you are eligible to vote");
    }
    else if (a>=10)
    {
        printf("you are a tennager");
    }
    else
    {
        printf("you are not eligible to vote");
    }
}