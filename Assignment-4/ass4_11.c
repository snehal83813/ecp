#include<stdio.h>
long int fact(int x);
int main()
{
printf("enter a number to find factorial:");
scanf("%d",&x);
printf("the factorial of %d=%ld",x,fact(x));
return 0;
long int fact(int x)
{
if(x>=1)
return x*fact(x-1);
else
return -1;
