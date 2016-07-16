#include<stdio.h>
int main()
    {
    
    FILE *in;
    float a,b;
    int i;
    char c;
    in = fopen("simple-sum","r");
    for(i=1;i<=4;i++)
        {
        fscanf(in,"%f",&a);
        fscanf(in,"%c",&c);
        fscanf(in,"%c",&c);
        fscanf(in,"%f\n",&b);
        switch(c)
            {
            case '+':
                printf("%.2f\n",(a+b));break;
            case '-':
                printf("%.2f\n",(a-b));break;
            case '*':
                printf("%.2f\n",(a*b));break;
            case '/':
                printf("%.2f\n",(a/b));break;
            default: 
                printf("Wrong Input! ");
            }
        }
    fclose(in);
    return 0;
    
    }
