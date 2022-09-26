#include<stdio.h>
int main()
{
	int eng[5],sci[5],guj[5],total[5],i;
	float per[5];

	for(i=0;i<4;i++)
	{
		printf("enter eng: ",i);
		scanf("%d",&eng[i]);
		printf("enter sci: ",i);
		scanf("%d",&sci[i]);
		printf("enter guj: ",i);
		scanf("%d",&guj[i]);
	}
	for(i=0;i<4;i++)
	{
		printf("\n eng[%d]:%d",i,eng[i]);
		printf("\t sci[%d]:%d",i,sci[i]);
		printf("\t guj[%d]:%d",i,guj[i]);

		total[i]=eng[i]+sci[i]+guj[i];
		printf("\t total[%d]:%d",i,total[i]);
		per[i]=total[i]*0.33;
		printf("\t per:%f",per[i]);
	}
}