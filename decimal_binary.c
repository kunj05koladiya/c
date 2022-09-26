#include<stdio.h>
int main()
{
    int k,a[100],b[100],i,j;
    printf("\n Enter k: ");
    scanf("%d",&k);
    for(i=1;k>0;i++)
    {
        a[i]=k%2;
        k=k/2;
    }
    j=i-1;
    for(i=i-1;i>=1;i--)
    {
        b[j]=a[i];
        printf("\n %d",b[j]);
    }
    return 0;
}