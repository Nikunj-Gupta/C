#include<stdio.h>
int main(int argc , char *arg[])
    {
    if(argc >= 3)
        {
        FILE *input;
        input = fopen(arg[2],"r");
        int threshold=atoi(arg[1]);
        char header[500];
        int i,j,value=0;
        for(i=0;;i++)
            {
            fscanf(input,"%c",&header[i]);
            if(header[i]==('%'))
                {
                printf("%c",header[i]);
                break;
                }
            printf("%c",header[i]);
            }
        fscanf(input,"%c",&header[i]);
        printf("%c",header[i]);
        printf("\n");
        while(!feof(input))
            {
            fscanf(input,"%d",&value);
            if(value > threshold || value < (-threshold))
                {
                printf("%d\n",value);
                break;
                }
            }
        while(!feof(input))
            {
            fscanf(input,"%d",&value);
            printf("%d\n",value);
            }
        fclose(input);
        }
    else
        {
        printf("Wrong Input\n");
        }
    return 0;
    }
