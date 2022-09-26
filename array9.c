#include<stdio.h>
int main()
{
	int a[3][3],i,j,m,n,p;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
		printf("\t");
	printf("\n");	
	}
	m=a[0][1]+a[0][2]+a[1][2];
	printf("\n uper triangle is:%d",m);

	n=a[0][0]+a[1][1]+a[2][2];
	printf("\n diagonal is:%d",n);

	p=a[1][0]+a[2][0]+a[2][1];
	printf("\n lower triangle:%d",p);
	
}