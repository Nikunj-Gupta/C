#include<stdio.h>
int main(int argc, char *arg[])
    {
    
    int a,b,c,i;
    a = atoi(arg[1]);
    b = atoi(arg[2]);
    c = atoi(arg[3]);
    i = a;
    while(i<=b)
        {
        printf("%d ",i);
        i = i + c; 
        }
    return 0;
    
    }
