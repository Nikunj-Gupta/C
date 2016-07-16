#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float compute(float phi ,float k ,float z ,float *imag)
{
float a,e,real;
a= k*z;
e = pow(2.71,phi);
real = e * cos(a);
*imag = e * sin(a);
return real;
}
