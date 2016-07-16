#include<stdio.h>
int main()
{
int i,a,b,ans = 1;
printf("Enter a and b: ");
scanf("%d %d",&a,&b);
for(i=1;i<=b;i++)
{
ans = ans * a;
}
printf("ans = %d\n",ans);
return 0;
}
