#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%2d\t",j);
		}
	printf("\n");
	}

	return 0;
}