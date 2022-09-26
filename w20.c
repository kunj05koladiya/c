#include<stdio.h>
int main()
{
	int i,j;
	i=11;
	while(i<=15)
	{
		j=1;
		while(j<=5)
		{
			printf("%d\t",j);
			j++;
		}
	i++;
	printf("\n");
	}
	return 0;
}