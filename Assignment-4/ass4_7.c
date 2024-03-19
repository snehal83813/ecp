#include<stdio.h>
int main()
{
int num1,num2,num3,i,n;
printf("enter the length of fibonacci series:");
scanf("%d",&n);
printf("the fibonacci series is:\n");
printf("%d%d",num1,num2);
for(i=2;i<=n;i++)
{
num3=num1+num2;
printf("%d",num3);
num1=num2;
num2=num3;
}
return 0;
}
