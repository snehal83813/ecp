#include<stdio.h>
int main()
{
int n,fact,i;
printf("enter a number to find factorial:");
scanf("%d",&n);
for(i=1;i<=n;i++)
fact=fact*n;
printf("factorial of %d is:%d",n,fact);
return 0;
}
