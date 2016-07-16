#include<stdio.h>
int sum(int a, int b)
{
int total = 0;
for (;a<b;a++)
total = total + a;
return total;
}
int main()
{
printf("%d\n",sum(2,4));
return 0;
}
