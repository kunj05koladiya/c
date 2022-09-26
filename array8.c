#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			printf("\t enter b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		printf("A: ");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\t");
		printf("B: ");
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\t");
		printf("total: ");
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\t");
	printf("\n");
	}
	
}