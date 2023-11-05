/*write a c program if a person is eligible to vote or not*/
#include<stdio.h>
void main()
{
    int a;
    printf("enter the person age");
    scanf("%d",&a);
    if (a>=18)
    {
        printf("you are eligible to vote");
    }
    else
    {
        printf("you are not eligible to vote");
    }
    
}