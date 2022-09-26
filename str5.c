#include<stdio.h>
int main()
{
            
             char str[100];
             int start,end,i;
             printf("enter your name: ");
             gets(str);
             printf("%s",str);
             printf("\n enter starting position: ");   
             scanf("%d",&start);
             printf("\n enter ending position: ");
             scanf("%d",&end);
             for(i=0;str[i]!='\0';i++)
             {
                   if (i==start)
                    {
                           for(i=start;i<=end;i++)
                           {
                                    printf(" * ");
                           }
                    }
                     printf("%c",str[i]);
            }
}
                              
                      