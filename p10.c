#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2d\t",(i+j)%2);
		}
	printf("\n");
	}





	return 0;
}