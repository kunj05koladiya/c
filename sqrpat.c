#include<stdio.h>
int main()
{
	int i,j,n;

	printf("enter n: ");
	scanf("%d",&n);
	

	int a=(n-1)/2;

	int b=3*n/2-1;

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		  if(i+j<=a || i-j>=a || j-i>=a || i+j>=b)
		  {
			printf(" *");
		  }
		  else
		  {
			printf("  ");
		  }
	 	}
		printf("\n");
	}
}