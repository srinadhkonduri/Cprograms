#include<stdio.h>
void main()
{
    int n;
    int m;
    int a;
    int Exit;
    int Exi;
    printf("welcome to the modern periodic table \n\n");
    printf("> enter 1 to know about an element\n\n");
    printf("> enter 2 to close the periodic table \n\n ");
    printf("ENTER\n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("> press 3 to search the element by atomic number\n\n");
        scanf("%d",&m);
        if (m==3)
        {
            printf("enter the atomic numbernof the element to be searched");
            scanf("%d",&a);
            if (a==1)
            {
                printf("name ::Hydrogen\n");
                printf("Symbol :H\n");
                printf("Atomic number :1\n");
                printf("Eletronic configuaration :1s^1\n");
                printf("Discovered by :Henry cavendish\n");
                printf("Charge : +1\n");
            }   
        }
    }
    else if (n==2)
    {
        printf("Do you want to exit? (yes/no)\n");
        printf("> press 6 for yes\n");
        printf("> press 7 for no\n");

        printf("ENTER\n");
        printf("%d",&Exit);
        if (Exit==6)
        {
            printf("are you sure , you want to close the periodic table? (yes/no)\n");
            printf("> press 4 for yes\n");
            printf("> press 5 for no\n");

            printf("enter \n");
            scanf("%d",&Exit);
            if (Exi==4)
            {
                printf("the periodic table has been closed");
            }
            else if (Exi==5)
            {
                printf("periodic table has not been closed tou can learn more about elements\n\n");
                printf("enter the atomic number to the element is to be searched::\n\n");
                scanf("%d",&a);

                if (a==1)
                {
                printf("name ::Hydrogen\n");
                printf("Symbol :H\n");
                printf("Atomic number :1\n");
                printf("Eletronic configuaration :1s^1\n");
                printf("Discovered by :Henry cavendish\n");
                printf("Charge : +1\n");
                }
                else
                {
                printf("name ::helium\n");
                printf("Symbol :He\n");
                printf("Atomic number :2\n");
                printf("Eletronic configuaration :1s^2\n");
                printf("Discovered by :Henry cavendish\n");
                printf("Charge : +2\n");
                }   
            }
        }
        else if (Exit==7)
        {
            printf("periodic table is not closed and you can learn more about periodic elements");
            printf("enter the atomic number to be searched");
            scanf("%d",&a);
            if (a==1)
            {
                printf("name ::Hydrogen\n");
                printf("Symbol :H\n");
                printf("Atomic number :1\n");
                printf("Eletronic configuaration :1s^1\n");
                printf("Discovered by :Henry cavendish\n");
                printf("Charge : +1\n");
            }
        }   
    }
}