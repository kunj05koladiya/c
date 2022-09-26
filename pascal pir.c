#include<stdio.h>
int main()
{
	int i,j,n=5;
	int number=1;
	for(i=0;i<n;i++)
	{
		printf("%"+(n-i)*2+"s","");
		for(j=0;j<i;j++)
		{
			printf("%4d",number);
			number=number*(i-j)/(j+1);	
		}
	}
}