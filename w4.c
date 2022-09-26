#include<stdio.h>
int main()
{
	int i,n;
	printf("enter value: ");
	scanf("%d",&n);
        i=n;
	while(n>=1)
	{
		printf("%d\t",n);
		n--;
	}

	return 0;
}