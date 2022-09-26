#include<stdio.h>
int main()
{
	char str[100],str2[100];
	int len,len2,i;
	printf("enter str: ");
	scanf("%s",str);
	printf("enter str2: ");
	scanf("%s",str2);
	
	for(len=0;len[str]!='\0';len++);
	for(len2=0;len2[str2]!='\0';len2++);

	if(len==len2)
	{
		printf("\n lenth is same");
	}
	else
	{
		printf("\n lenth is not same");
	}
}