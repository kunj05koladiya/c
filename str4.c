#include<stdio.h>
int main()
{
	int i,j,len1,len2;
	char str1[100],str2[100];
	printf("enter str1: ");
	scanf("%s",str1);
	
	printf("enter str2: ");
	scanf("%s",str2);
	

	for(len1=0;str1[len1]!='\0';len1++);
	for(len2=0;str2[len2]!='\0';len2++);

	if(len1==len2)
	{
		printf("\n lenth is  same");
	}
	else
	{
		printf("\n lenth is not   same");
	}
	
	
}