#include<stdio.h>
int main()
{
	int maths[5],guj[5],sci[5],history[5],eng[5],total[5],grade[5],i;
	float per[5];

	for(i=0;i<6;i++)
	{
		printf("enter maths: ",i);
		scanf("%d",&maths[i]);
		printf("enter guj: ",i);
		scanf("%d",&guj[i]);
		printf("enter sci: ",i);
		scanf("%d",&sci[i]);
		printf("enter history: ",i);
		scanf("%d",&history[i]);
		printf("enter eng: ",i);
		scanf("%d",&eng[i]);
	}
	for(i=0;i<6;i++)
	{
		printf("\n maths[%d]:%d",i,maths[i]);
		printf("\t guj[%d]:%d",i,guj[i]);
	           	printf("\t sci[%d]:%d",i,sci[i]);		
		printf("\t history[%d]:%d",i,history[i]);
		printf("\t eng[%d]:%d",i,eng[i]);
		total[i]=maths[i]+guj[i]+sci[i]+history[i]+eng[i];
		printf("\t total[%d]:%d",i,total[i]);
		per[i]=total[i]*0.20;
		printf("\t per:%f",per[i]);
		
	}
	

}