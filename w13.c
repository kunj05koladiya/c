#include<stdio.h>
int main()
{
	char i;
	i=65;
	do
	{
		if(i%4==0)
		{
			printf("%c\t",i);
		}
		else
		{
			printf("%c\t",i);
		}
		
		i++;
	}while(i<=90);
	return 0;
}