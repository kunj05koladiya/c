#include<stdio.h>
int main()
{
	char str1[100],str2[100],str3[100];
	printf("enter str1: ");
	scanf("%s",str1);
	printf("str : %s",str1);

	fflush(stdin);
	
	printf("\n enter str2: ");
	scanf("%[^\n]",str2);
	printf("str2 : %s",str2);

	fflush(stdin);

	printf("\n enter str3: ");
	gets(str3);
	puts(str3);
}
	
