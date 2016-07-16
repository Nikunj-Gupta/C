#include<stdio.h>
int main()
    {
    int i,j,check,count=0;
    int a,b;
    printf("Enter lower and upper limit: ");
    scanf("%d %d",&a,&b);
    for(i=a;i<=b;i++)
        {
        check = 0;
        for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                check = 1;
                break;
                }
            }
        if(check==0)
            {
            printf("%d ",i);
            count++;
            }
        }
        printf("\ncount = %d\n",count);
        return 0;
    }
