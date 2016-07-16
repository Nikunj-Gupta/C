#include<stdio.h>
int main()
    {
    int miles,totaldays,days,years;
    float costpergallon,costofmod,mpgbefore,mpgafter,total1,total2,savings;
    printf("Enter the number of miles driven per year:");
    scanf("%d",&miles);
    printf("\nEnter the cost of a gallon of gasoline (in dollars):");
    scanf("%f",&costpergallon);
    printf("\nEnter the cost the modication:");
    scanf("%f",&costofmod);
    printf("\nEnter the mpg before the modification:");
    scanf("%f",&mpgbefore);
    printf("\nEnter the mpg after the modification:");
    scanf("%f",&mpgafter);
    total1 = (miles * costpergallon) / mpgbefore;
    total2 = (miles * costpergallon) / mpgafter;
    savings = total1 - total2;
    totaldays = (costofmod / savings) * 365;
    years = totaldays / 365;
    days = totaldays - (years *365);
    printf("\nThe yearly cost of driving without the modification: %f\n",total1);
    printf("The yearly cost of driving with the modification: %f\n",total2);
    if(years == 0)
        if(days == 1)
            printf("%d day",days);
        else
            printf("%d days",days);
    else if(days == 0)
        if(years==1)
            printf("%d year ",years);
        else
            printf("%d years ",years);
    else if(years !=0 && days != 0)
        printf("%d years %d days",years,days);
    else if(years == 1 && days == 1)
        printf("%d year and %d day",years,days);
    }
