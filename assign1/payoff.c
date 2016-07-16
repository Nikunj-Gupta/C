#include<stdio.h>
int main()
    {

    int miles,totaldays,days,years;
    float costpergallon,costofmod,mpgb,mpga,total1,total2,savings;
    printf("Enter the number of miles driven per year:");
    scanf("%d",&miles);
    printf("\nEnter the cost of a gallon of gasoline (in dollars):");
    scanf("%f",&costpergallon);
    printf("\nEnter the cost the modication:");
    scanf("%f",&costofmod);
    printf("\nEnter the mpg before the modification:");
    scanf("%f",&mpgb);
    printf("\nEnter the mpg after the modification:");
    scanf("%f",&mpga);
    total1 = (miles * costpergallon) / mpgb; 
    total2 = (miles * costpergallon) / mpga;
    savings = total1 - total2;
    totaldays = (costofmod / savings) * 365;
    years = totaldays / 365;
    days = totaldays - (years * 365);
    printf("\nThe yearly cost of driving without the modification: %.2f\n",total1);
    printf("The yearly cost of driving with the modification: %.2f\n",total2);
    if(mpgb != mpga)
        {
        switch(years)
            {
            case 0:
                break;
            case 1:
                printf("%d year ",years);
                break;
            default: 
                printf("%d years ",years);
                break;
            }
        if(years!=0 && days!=0)
            {
            printf("and ");
            }
        switch(days)
            {
            case 0:
                break;
            case 1:
                printf("%d day\n",days);
                break;
            default: 
                printf("%d days\n",days);
                break;
            }
        if(years<0 && days<0)
            {
            printf("Invalid");
            }
        }
    else
        {
        printf("mpg before and mpg after cannot be same.");
        }
    return 0;
    
    }
