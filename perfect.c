#include<stdio.h>

int perfect(int a)
{	
	int b=0,i;
	for(i=1;i<a;i++)
      	 {
		if(a%i==0)
		{
			b+=i;
		}
	}
	if(b==a)
	{
		printf("\n perfect number");
	}
	else
	{
		printf("\n not perfect number");
	}
	
}

int main()
{
	int a;
	printf("\n Enter a : ");
	scanf("%d",&a);
	perfect(a);	
}