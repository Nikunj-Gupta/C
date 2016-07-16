#include<stdio.h>
int main(int argc,char *arg[])
{
FILE *cost,*journey;
cost = fopen(arg[1],"r");
journey = fopen(arg[2],"r");
double costs,totalcosts=0.0;
char *dest[100],*start[100];
char *place1[100],*place2[100];
fscanf(journey,"%s",start);
fscanf(journey,"%s",dest);
while(!feof(cost))
{
fscanf(cost,"%s",place1);
fscanf(cost,"%f",costs);
if(strcmp(place1,start)==0)
{
break;
}
}
totalcosts = totalcosts + costs;
while(!feof(cost))
{
fscanf(cost,"%s",place1);
fscanf(cost,"%f",costs);
while(strcmp(place1,dest)!=0)
{
totalcosts = totalcosts + costs;
}
break;
}
printf("%3.2f",totalcosts);
fclose(cost);
fclose(journey);
return 0;
}
