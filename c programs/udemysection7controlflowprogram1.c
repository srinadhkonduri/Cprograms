// if statement example 
#include<stdio.h>
void main()
{
    int score=95;
    int big=90;
    //simple statement if no brackets
    if (score>big)
    printf("jackpot");
    //compound statements if there are brackets
    if (score>big)
    {
        score++;
        printf("you win");
    }
    
    
}