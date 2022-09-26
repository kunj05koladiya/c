#include<stdio.h>
int main()
{
	int i,j;
	i=1;
	while(i<=10)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
	i++;
	printf("\n");
	}
        return 0;
}