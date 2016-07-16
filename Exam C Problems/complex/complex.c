#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc,char *arg[])
{
float phi,k,z,real,imag;
phi = atof(arg[1]);
k = atof(arg[2]);
z = atof(arg[3]);
real = compute(phi,k,z,&imag);
printf("%3.2f + i%3.2f\n",real,imag);
return 0;
}
