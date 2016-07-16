#include<stdio.h>
int main()
    {
    int n,x,sum=0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    while(n>0)
        {
        x = n % 10;
        sum = sum + x;
        n = n/10;
        }
    printf("Sum of Digits = %d ",sum);
    return 0;
    }
