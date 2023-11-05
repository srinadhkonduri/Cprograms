//switch case example
#include<stdio.h>
void main()
{
    enum weekday { monday,tuesday,wednesday,thursday,friday,saturday}
    enum weekday today=monday;
    switch (today)
    {
    case sunday:
        printf("today is sunday");
        break;
    case monday:
        printf("today is monday");
        break;
    case tuesday:
        printf("today is tuesday");
        break;
    case wednesday:
        printf("today is wednesday");
        break;
    case thursday:
        printf("today is thursady");
        break;
    case friday:
        printf("today is friday");
        break;
    case saturday
        printf("today is saturday");
        break;                
    default:
        break;
    }    
    
    default:
        break;
    }
