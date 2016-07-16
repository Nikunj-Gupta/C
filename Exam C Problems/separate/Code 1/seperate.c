#include<stdio.h>
int prime(n)
{
int j;
int flag = 0;
for (j=2;j<n;j++)
{
if(n%j==0)
{
flag = 1;
break;
}
}
if (flag==0)
{
return 1;
}
else
{
return 0;
}
}
int main(int argc , char *arg[])
{
int a;
FILE *input1;
FILE *input2;
FILE *input3;
input1 = fopen("prime.dat","w+"); 
input2 = fopen("odd.dat","w+"); 
input3 = fopen("even.dat","w+");
int i;
for(i=1;i<argc;i++)
{
a = atoi(arg[i]);
if(prime(a)==1)
{
fprintf(input1,"%d ",a);
}
else if(a%2==0)
{
fprintf(input3,"%d ",a);
}
else if (a%2==1)
{
fprintf(input2,"%d ",a);
}
}
fclose(input1);
fclose(input2);
fclose(input3);
return 0;
}
