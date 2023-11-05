/*write a c program which takes the input marks of the student and gives them reward*/

#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c,d;
    printf("enter the marks in maths");
    scanf("%d",&a);
    printf("enter the marks in physics");
    scanf("%d",&b);
    printf("enter the marks in chemistry");
    scanf("%d",&c);
    printf("the marks in the subject maths is %d\n",a);
    printf("the marks in the subject of physics is %d\n",b);
    printf("the marks in the subject of chemistry is %d\n",c);
    printf("the sum of all subjects is %d",d=a+b+c);
    if (d>=250)
    {
        printf("you have rewarded by 45 rupees");
    }
    else if (d>=200)
    {
        printf("you have rewarded 30 rupees");
    }
    else if (d>=150)
    {
        printf("you have rewarded 25 rupees");
    }
    else 
    {
        printf("you failed");
    }
}