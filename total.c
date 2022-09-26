#include<stdio.h> 
void main()
{
   float price;
   float qty;
   float total;
   float dis;
   float bill;    
    printf("\n\n Enter Price of Item & qty : ");
    scanf("%f %f",&price,&qty);
    total=price*qty;
    printf("\n total:%f",total);

    if(total<1000)
    {
        dis=(total*5)/100;
    }
    else if(total>1000 && total<5000)
    {
        dis=(total*10)/100;
    }
    else
    {
        dis=(total*15)/100;
    }
    printf("\n dis:%f",dis);
    bill=total-dis;
    printf("\n\n final price is:%f",bill);
}
