#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *arg[])
    {
    
    switch(*arg[2])
        {
        case '+': printf("%.2f\n",(atof(arg[1])+atof(arg[3])));break;
        case '-': printf("%.2f\n",(atof(arg[1])-atof(arg[3])));break;
        case '*': printf("%.2f\n",(atof(arg[1])*atof(arg[3])));break;
        case '/': printf("%.2f\n",(atof(arg[1])/atof(arg[3])));break;
        default: printf("Invalid");break;
        }
    return 0;
    
    }
