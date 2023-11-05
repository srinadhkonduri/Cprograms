/*program to find the factorial of the number using while loop*/
#include<stdio.h>
void main()
{
    int n,fn,i;
    printf("enter what factorial you want");
    scanf("%d",&n);
    fn=1;
    i=1;
    while (i<=n)
    {
        fn=fn*i;
        i++;

    }
    printf("factorial is %d\n",fn);
}