#include<stdio.h>
int main()
{
FILE *in;
int a,b,sum = 0;
in = fopen("input","r+w");
fscanf(in,"%d",&a);
fscanf(in,"%d",&b);
sum = a + b;
fprintf(in,"\nSum = %d\n",sum);
fclose(in);
return 0;
}
