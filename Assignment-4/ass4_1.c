#include<stdio.h>
int fact(int);
int main()
{
int num,factorial;
printf("enter a number:");
scanf("%d",&num);
factorial=fact(num);
printf("the factorial of %d is %d\n",num,factorial);
}
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
{
f=f*i;
}
return f;
}

