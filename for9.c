#include<stdio.h>
int main()
{
	char i,j,k=1;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%.3c\t",k++);
		}
	printf("\n");
	}


	return 0;
}