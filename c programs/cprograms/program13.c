#include <stdio.h> // do while loop
void main()
{
    int num, index = 0;
    printf("enter a number");
    scanf("%d", &num);
    do
    {
        printf("%d", index);
        index = index + 1;
    } while (index < num);
}