#include<stdio.h>
int revers(int n)
{
	int rem,rev=0;
	while(n!=0)
	{
		rem=n%10;
		rev=(rev*10)+rem;
		n=n/10;
		
	}
	return rev;
}
int main()
{
	int  n,rev_num;
	printf("\n Enter n : ");
	scanf("%d",&n);
	
	
	
	printf("\n revers nomber  : %d ",revers(n));
}
