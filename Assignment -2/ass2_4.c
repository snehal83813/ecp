#include<stdio.h>
int main()
{
int a,b;
printf("enter a number:");
scanf("%d%d",&a,&b);
if(a<b)
printf("b is a maximum number");
if(a>b)
printf("a is the maximum number");
if(a==b)
printf("both are equal");
else
{
printf("the number is invalid");
}
return 0;
}
