#include<stdio.h>   // switch statement example
void main()
{
    int age;
    printf("enter the age");
    scanf("%d",&age);
    printf("the age is %d",age);

    switch (age)
    {
    case 3:
        printf("you are a kid");
        break;

    case 18:
        printf("you are a tennager");
        break; 

    case 80:
        printf("you are not a tennager");
        break;   
    
    default:
        printf("\n no need condition");
        break;
    }
}