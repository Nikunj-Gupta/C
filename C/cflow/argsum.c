#include<stdio.h>
int main(int argc,char *arg[])
    {
    int sum=0,i;
    for(i=atoi(arg[1]);i<=atoi(arg[2]);i++)
        {
        sum = sum + i;
        }
    printf("sum = %d\n",sum);
    return 0;
    }
