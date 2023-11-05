// determining the amount of weekly pay //error
#include<stdio.h>
#include<stdlib.h>
#define PAYRATE_12
#define TAXRATE_300
#define TAXRATE_150
#define TAXRATE_rest
#define OVERTIME 40
void main()
{
    //declaring variables
    int hours=0;
    double grosspay=0.0;
    double taxes=0.0;
    double netpay=0.0;
    printf("please enter the number of hours worked this week");
    scanf("%d",&hours);
    //calculate the gross pay
    if (hours<=40)
        grosspay=hours*PAYRATE_12    
        else{
            grosspay=hours*PAYRATE_12
            double over timepay=(hours-40)*(PAYRATE_1.5)
            grosspay +=over timepay
        }   
        //calculate taxes
        if (grosspay<=300)
        {
            taxes=grosspay*TAXRATE_300;
        }
        else if (grosspay>300 && grosspay<=450)
        {
            taxes =300*TAXRATE_300;
            taxes +=(grosspay-300)*TAXRATE_150;
        }
        else if (grosspay>450)
        {
            taxes =300*TAXRATE_300;
            taxes +=150*TAXRATE_150;
            taxes +=(grosspay-450)*TAXRATE_REST;
        }
        // Calculate the net pay
        netpay =grosspay-taxes;
        // display output
        printf("your grosspay this week is %2f\n",grosspay);
        printf("your taxes this week is %2f\n",taxes);
        printf("your netpay this week is %2f\n",netpay);
}