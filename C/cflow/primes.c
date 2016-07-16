#include<stdio.h>
int prime(int n)
    {
    int i,count=0,flag=0;
    for(i=2;i<n;i++)
        {
        if(n%i==0)
            flag = 1;
        }
    return flag;
    }
int main()
    {
    int j,a,b,c,count=0;
    printf("Enter lower and upper limit: ");
    scanf("%d %d",&a,&b);
    for(j=a;j<=b;j++)
        {
        c = prime(j);
        if(c==0)
            {
            printf("%d\n",j);
            count++;
            }
        }
    printf("Count = %d",count);
    return 0;
    }
