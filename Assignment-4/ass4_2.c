#include<stdio.h>
int main()
{
int base,exp;
long double result=1.0;
printf("enter a base number:");
scanf("%d",&base);
printf("enter an exponent:");
scanf("%d",&exp);
while(exp!=0)
{
result*=base;
--exp;
}
printf("answer=%0lf",result);
return 0;
}
