#include<stdio.h>
int main()
{
	int i,j;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c\t",j);
		}
	printf("\n");
	}


	return 0;
}