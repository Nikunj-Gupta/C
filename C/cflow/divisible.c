#include<stdio.h>
int main()
    {
    int a,b,i,count = 0;
    printf("Enter lower limit: ");
    scanf("%d",&a);
    printf("Enter higher limit: ");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
            {
            if(i%2==0 || i%3==0)
                {
                count++;
                }
            }
    printf("%d\n",count);
    return 0;
    }
