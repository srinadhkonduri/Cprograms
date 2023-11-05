/*while statement or pre test loops*/
//program to print first n numbers
#include<stdio.h>
void main()
{
    int i,n;
    printf("enter the value::\n");
    scanf("%d",&n);
    i=1;
    while (i<=n) //condition
    {
        printf("%d\t",i);
        i=i+1; //increament statement
    }
    
}