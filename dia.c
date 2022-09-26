#include<stdio.h>
void main()
{
	int no;
	int i,j;
	printf("Enter the number:\n");
	scanf("%d",&no);
	for(i=1;i<=no;i++)
	{
		for(j=i;j<=no;j++)
		{	                			printf("*");
		}
		for(j=1;j<=(i*2-2);j++)
		{                                 
	        	printf(" ");
		}
		for(j=i;j<=no;j++)
		{
	        	printf("*");
		}
		printf("\n");
	}
	/*for(i=1;i<=no;i++)
	{
		for(j=1;j<=i;j++)
		{                          
   	        	printf("*");
		}
		for(j=1;j<=(no*2-i*2);j++)
		{}
		for(j=1;j<=i;j++)
		{
		       printf("*");
		}
		printf("\n");
	}*/
}