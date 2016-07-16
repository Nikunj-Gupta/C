#include<stdio.h>
int main()
    {
    FILE *in;
    float a,b;
    int i;
    char c;
    in = fopen("simple-sum","r");
    for(;!feof(in);)
        {
        fscanf(in,"%f",&a);
        fscanf(in,"%c",&c);
        fscanf(in,"%c",&c);
        fscanf(in,"%f\n",&b);
        if(c=='+')
            printf("%.2f\n",(a+b));
        if(c=='-')
            printf("%.2f\n",(a-b));
        if(c=='*')
            printf("%.2f\n",(a*b));
        if(c=='/')
            printf("%.2f\n",(a/b));
        }
    fclose(in);
    return 0;
    }
