#include<stdio.h>
int prime(int n)
    {
    int count = 0,i;
    for(i=2;i<n;i++)
        {
        if(n%i==0)
            {
            count=1;
            break;
            }
        }
    if(count==0)
        {
        return count;
        }
    }
int main()
    {
    int count = 0,j;
    int c,a = 10,b = 100;
    for(j=a;j<=b;j++)
        {
        c=prime(j);
        if(c==0)
            {
            printf("%d ",j);
            count++;
            }
        }
    printf("%d ",j);
    printf("\ncount = %d\n",count);
    return 0;
    }
