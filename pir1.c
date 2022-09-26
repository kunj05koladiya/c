#include<stdio.h>
int main()
  /*{
	int i,j,sp=10;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=sp;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}	
	printf("\n");
	sp++;
	}
	return 0;   
    
}   */

              
{
	int i,j,sp=10;
	int n=9;
	int k=n/3+1;
        for(i=1;i<=n;i++)
	{
		for(j=1;j<=sp;j++)
			printf("* ");
		for(j=1;j<=n;j++)
		{
			printf(" ");
		}                  
			if(i<=n/1)
			k--;
			
			printf("\n");                                                        
	
	}
	return 0;
	
}