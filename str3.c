#include<stdio.h>
int main()
{
        int k,i,j;
        char str1[20],str2[20];
        printf("Enter str1 :");
        scanf("%s",str1);
        for(k=0;str1[k]!='\0';k++);
        for(i=0,j=k-1;i<k;i++,j--)
        {
                str2[j]=str1[i];
        }
        str2[k]='\0';
        printf("\nstring2 :%s",str2);
}
	