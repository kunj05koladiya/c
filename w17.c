#include<stdio.h>
int main()
{
	int i,j,k=1;
	i=1;
	while(i<=10)
	{
		j=1;
		while(j<=5)
		{
			printf("%d\t",k++);
			j++;
		}
	i++;
	printf("\n");
	}
	return 0;
}