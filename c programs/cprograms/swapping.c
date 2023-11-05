// swapping program i c language usinf third variable
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    int clrscr();
    printf("enter the values of a and b");
    scanf("%d%d",&a,&b);
    printf("before swapping the values are %d %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("the value of a is %d\n",a);
    printf("the value of b is %d\n",b);
}