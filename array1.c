#include<stdio.h>
int main()
{
	int a[10],b[10],i;
	for(i=0;i<5;i++)
	{
		printf("enter a[%d]: ",i);
		scanf("%d",&a[i]);
		printf("enter b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n a[%d] : %d",i,a[i]);
		printf("\t b[%d] : %d",i,b[i]);
		printf("\t a[i]-b[i]=%d",a[i]-b[i]);
	}
}