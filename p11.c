#include<stdio.h>
int main()
{
	char i,j;
	for(i=64;i<69;i++)
	{
		for(j=i;j>=64;j--)
		{
			printf("%c\t",j);
		}
	printf("\n");
	}
}