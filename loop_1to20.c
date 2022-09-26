#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=4;j++)
		{
			printf("%4d",k);
			k+=5;
		}
	printf("\n");
	}
}