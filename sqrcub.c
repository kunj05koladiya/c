#include<stdio.h>
int main()
{
	int a;
	void squre(int a);
	void cub(int a);
	printf("enter value of a: ");
	scanf("%d",&a);
	squre(a);
	cub(a); 
	
}
void squre(int a)
{
	printf("\n squre:%d",a*a);
}
void cub(int a)
{
	printf("\t cub:%d",a*a*a);
}