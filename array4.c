#include<stdio.h>
int main()
{
	int a[10],i,sum=0;
	for(i=0;i<6;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=a[i]+a[i+1];
		printf("\t %d",sum);
	}
}
