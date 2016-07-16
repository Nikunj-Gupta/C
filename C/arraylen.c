#include<stdio.h>
int main()
    {
    char str[100];
    int j,i=0,count=0,store=0;
    for(j=1;j<10;j++)
        {
        str[store]=j;
        store++;
        }
    while(str[i]!='\0')
        {
        count++;
        i++;
        }
    printf("%d\n",count);
    return 0;
    }
