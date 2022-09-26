#include<stdio.h>
int main()
{
	int i,j,a[3][3],x,y,z;
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
			printf("\t %d ",a[i][j]);
		}
		printf("\t");
			
	printf("\n");
		
	}
	x=a[0][0]+a[1][1]+a[2][2];
	printf("\n diagonal:  %d",x);
	y=a[0][1]+a[0][2]+a[1][2];
	printf("\n uper triangle: %d",y);
	z=a[1][0]+a[2][0]+a[2][1];
	printf("\n lower triangle: %d",z);
	
}
 