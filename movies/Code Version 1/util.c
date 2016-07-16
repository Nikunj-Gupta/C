#include<stdio.h>
int display(char file[100])
    {
    char c;
    while(!feof(input))
        {
        fscanf(input,"%c",&c);
        printf("%c",c);
        }
    }
int shortest(char file[100])
{
FILE *input;
input = fopen(file,"r+w");
int time[1000];
int i=0,a,count = 0;
char s1[1000],s2[1000];
while(!feof(input))
{
fscanf(input,"%s",s1);
fscanf(input,"%s",s2);
fscanf(input,"%d",&time[i]);
fscanf(input,"%d",&a);
i++;
count++;
}
for(j=0;j<=count;j++)
{

}
