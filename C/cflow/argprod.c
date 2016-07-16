#include<stdio.h>
int main(int argc,char *arg[])
    {
    int i;
    long prod=1;
    for(i=atoi(arg[1]);i<=atoi(arg[2]);i++)
        {
        prod = prod * i;
        }
    printf("%ld\n",prod);
    return 0;
    }
