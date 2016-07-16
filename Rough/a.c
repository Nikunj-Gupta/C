#include<string.h>
#include<stdio.h>
#include<math.h>
main( int argc,char *argv[])
{
int audiovalue,thresholdvalue,i;
thresholdvalue=atoi(argv[1]);
char header_info[512];
FILE *fp;
fp=fopen(argv[2],"r");
do{
for(i=0; ;i++)
{
fgets(header_info,512,fp);
fprintf(stdout,"%s",header_info);
}
}while(header_info!="%%");


while(!feof(fp))
{
fscanf(fp,"%d",&audiovalue);
if(abs(audiovalue)<thresholdvalue)
break;
}
while(!feop(fp))
{
fscanf(fp,"%d",&audiovalue);
fprintf(stdout,"%d",audiovalue);
}

}
