#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			printf("%d\t",i);
			j++;
		}
	i++;
	printf("\n");
	}
	return 0;
}