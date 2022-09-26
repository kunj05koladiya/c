#include<stdio.h>
int main()
{
	char ch;
	ch='a';
	while(ch<='z')
	{
		printf("%c %c\t",ch,ch-32);
		ch++;
   	}


	return 0;
}