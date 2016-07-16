#include<stdio.h>

int primecheck(int n[],int m)
	{
	int i,e,j,count=0;
	for(j=0;j<m;j++)
		{
		if(n[j]==0||n[j]==1)
			printf("\n %d is Neither prime nor composite ",n[j]);
		else if(n[j]==2||n[j]==3)
			printf("\n %d Prime ",n[j]);
			if(n[j]==2)
				count+=1;
			if(n[j]==3)
				count+=1;
		else
			for(i=2;i<=n[j]/2;i++)
				{
				if(n[j]%i==0)
					{
					printf("\n %d Composite ",n[j]);
					e=0;
					break;
					}
				else
					e=1;
				}
			if(e==1)
				{
				printf("\n %d Prime ",n[j]);
				count+=1;
				}
		}
	printf("\n No of prime nos :%d \n",count);
	}
int main()
	{
	int i,a,b,n[50],size=0,j;
	printf("\n Enter lower limit : ");
	scanf("%d",&a);
	printf("\n Enter upper limit :");
	scanf("%d",&b);
	for(j=0,i=a;i<=b;i++,j++)
		{
		n[j]=i;
		size=size+1;
		}
	primecheck(n,size);
	}
