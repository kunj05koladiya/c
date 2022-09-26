#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
                {
			if(i==5||j==i||j==1)
			{
				printf("%3d",i);
			}
			else
			{
				printf("   ");
			}				
                }
	printf("\n");
        }

	return 0;
}