/*program to find the all arthamatic operations based in the choice given by the user*/
#include<stdio.h>
void main()
{
    int a,b,c,ch;
    printf("enter any two numbers");
    scanf("%d %d",&a,&b);
    printf("\n1.add");
    printf("\n2.sub");
    printf("\n3.prod");
    printf("\n4.div");
    printf("\n5.mod\n");
    printf("enter your choice");
    scanf("%d",&ch);
    if (ch==1)
    {
        c=a+b;
        printf("the addition is %d",c);
    }
    else if (ch==2)
    {
        c=a-b;
        printf("the subtraction is %d",c);
    }
    else if (ch==3)
    {
        c=a*b;
        printf("the product is %d",c);
    }
    else if (ch==4)
    {
        c=a/b;
        printf("the divsion is %d",c);
    }
    else if (ch==5)
    {
        c=a%b;
        printf("the modulation is %d",c);
    }
    else
    {
        printf("wrong option");
    }
}