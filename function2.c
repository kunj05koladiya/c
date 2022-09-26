#include<stdio.h>
void subjectmarks()
{
	int guj,eng,sci,com;
	float total,per;
	printf("enter guj marks: ");
	scanf("%d",&guj);
	printf("enter eng marks: ");
	scanf("%d",&eng);
	printf("enter sci marks: ");
	scanf("%d",&sci);
	printf("enter com marks: ");				<============no ..no
	scanf("%d",&com);
	
	total=guj+eng+sci+com;
	printf("\n total : %.2f",total);
	per=(total/400)*100;
	printf("\t per : %.2f",per);


}
int main()
{
	subjectmarks();
}

--------------------------------------------------------------------------------------------------------------------
#include<stdio.h>
int subjectmarks(int guj,int eng,int sci,int com)
{
	
	float total,per;
	total=guj+eng+sci+com;
	printf("\n total : %.2f",total);			<=============with...with		
	per=(total/400)*100;
	printf("\t per : %.2f",per);
	
	

	return per;
}
int main()
{
	int guj,eng,sci,com;
	float total,per;
	printf("enter guj marks: ");
	scanf("%d",&guj);
	printf("enter eng marks: ");
	scanf("%d",&eng);
	printf("enter sci marks: ");
	scanf("%d",&sci);
	printf("enter com marks: ");
	scanf("%d",&com);
	
	total=guj+eng+sci+com;
	printf("\n total : %.2f",total);
	per=(total/400)*100;
	printf("\t per : %.2f",per);
}