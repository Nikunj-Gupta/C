#include<stdio.h>
int main()
    
    {
    int array[100];
    int i,j,x,store=0,count = 0;
    printf("Enter the number: ");
    scanf("%d",&x);
    for(i=x;i>0;i=i/2)
        {
        array[store] = i%2;
        count++;
        store++;
        }
    for(j=count-1;j>=0;j--)
        {
        printf("%d",array[j]);
        }
    printf("\n");
    return 0;
    }
