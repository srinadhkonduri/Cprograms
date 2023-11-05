#include<stdio.h>     // 
void main ()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);
    printf("the day is %d",&number);
    switch (number)
    {
    case 1:
        printf("this day is sunday");
        break;
    case 2:
        printf("this day is monday");
        break;    
    case 3:
        printf("this day is tuesday");
        break;   
    case 4:
        printf("this day is wednesday");
        break;   
    case 5:
        printf("this day is thursday");
        break;   
    case 6:
        printf("this day is friday");
        break;   
    case 7:
        printf("this day is saturday");
        break;   
    
    default:
        printf("you entered wrong choice");
        break;
    }
}