//program to find all fibanocci series numbers using while loop
#include<stdio.h>
void main()
{
    int n,x,y,z,count;
    printf("enter how many fibonacci series you want");
    scanf("%d",&n);
    x=0;
    y=1;
    printf("%d %d",x,y);
    count=2;
    while (count<n)
    {
        z=x+y;
        printf("\n%d\n",z);
        count++;
        x=y;
        y=z;
    }
}