#include<stdio.h>
int main()
{
int quantity,price,discount;
printf("enter the quantity of product");
scanf("%d",&quantity);
  price=quantity * 5;

if(quantity>30 && quantity<50)
  printf("the discount is rs.%d",discount);

else  if(quantity>50)
  printf("the discount is rs.%d",discount);
  
else
{
printf("the discount will be %d",discount);
}

  discount=price - (10/price)*100;
 
return 0;
}
