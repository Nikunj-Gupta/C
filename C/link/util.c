#include<stdio.h>
int square();
int sumsquare(int,int);
int sumsquare(int a,int b)
{
int ans = 0;
ans = square(a) + square(b);
return ans;
}
