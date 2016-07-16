#include<stdio.h>
int main(int argc, char *arg[])
    {
    
    int a,b,c,i;
    a = atoi(arg[1]);
    b = atoi(arg[2]);
    c = atoi(arg[3]);
    for(i=a;i<=b;i=i+c)
        {
        printf("%d ",i);
        }
    return 0;
    
    }
