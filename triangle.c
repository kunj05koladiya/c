#include<stdio.h>
void triangle()
{
	int i, j,sp=35;
	for(i=1;i<=25;i++)
	{
		for(j=1;j<=sp;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		sp--;
	}
	
	
}
int main()
{
	triangle();
}