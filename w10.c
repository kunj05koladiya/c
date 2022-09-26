#include<stdio.h>
int main()
{
	int i;
	i=2;
	while(i<=28)
	{
		if(i%4==0)
		{
			printf("\t %c",i+63+32);
		}
		else
		{
			printf("\t %c",i+63);
		
		}
	i+=2;
	}
	
}