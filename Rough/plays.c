#include<stdio.h>
#include<string.h>
int main(int agrc, char *argv[])
    {
    int thresholdvalue=atoi(argv[1]),count=0,scanedvalue;
    char str[100];
    FILE *inp;
    inp=fopen(argv[2],"r");
    while(count<8)
        {
        fscanf(inp,"%s",str);
        printf("%s\n",str);
        count=count+1;
        }
    while(!feof(inp))
        {
        fscanf(inp,"%d",&scanedvalue);        
        if(scanedvalue>=thresholdvalue || scanedvalue<=(-thresholdvalue))
            {     
            break;
            }
        }
    while(!feof(inp))
        {

        fscanf(inp,"%d",&scanedvalue);
        printf("%d\n",scanedvalue);
        }
    fclose(inp);
    }





