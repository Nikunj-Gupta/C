#include<stdio.h>
float circle(float,float,float);
float circle(float r,float *c,float *a)
{
*c = 2 * 3.14 * r;
*a = 3.14 * r * r;
return(2 * r);
}
int main()
{
float rad = 2,diam = 0,circum = 0,area = 0;
diam = circle(radius,&circum,&area);
printf("Diameter = %d\n",diam);
printf("Circumference = %f",circum);
printf("Area = %f",area);
return 0;
}
