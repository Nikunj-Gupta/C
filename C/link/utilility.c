#include<stdio.h>
int main()
{
FILE *in;
char c;
in = fopen("print.c","r");
while(!feof(in))
{
fscanf(in,"%c",&c);
printf("%c",c);
}
fclose(in);
return 0;
}
