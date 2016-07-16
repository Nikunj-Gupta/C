#include<stdio.h>
float square(float);
float square(float x)
{
float z;
z = x * x;
return z;
}
int main()
{
float a;
printf("Enter a number: ");
scanf("%f",&a);
float c;
c = square(a);
printf("%f\n",c);
return 0;
}
