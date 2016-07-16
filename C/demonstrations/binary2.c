#include<stdio.h>
int showbits(int n)
	{
	int i,k,mask;
	for(i=15;i>=0;i=i-1)
		{
		mask=1<<i;
		k=n&mask;
		k==0?printf("0"):printf("1");
                }
	printf("\n");
	return 0;
	}
int main()
	{
	int g;
	printf("Enter number: ");
	scanf("%d",&g);
	showbits(g);
	return 0;
	}
