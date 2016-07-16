#include<stdio.h>
int main()
    {
    printf("Hello World!\n");
    FILE *input;
    char c;
    input=fopen("printfile.c","r");
    printf("PROGRAM:\n");
    for(;!feof(input);)
        {
        fscanf(input,"%c",&c);
        printf("%c",c);
        }
    fclose(input);
    return 0;
    }
