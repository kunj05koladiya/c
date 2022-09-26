#include<stdio.h>
int main()
{
	int a[10],i,max=0,min=0;
	for(i=0;i<6;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<6;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		else if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("\n max[%d]:%d",i,max);
	printf("\n min[%d]:%d",i,min);
}