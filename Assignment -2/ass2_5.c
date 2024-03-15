#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d%d%d",&a,&b,&c);
if(a<b && a<c)
printf("a is smaller number\n");
if(b<a && b<c)
printf("b is a smaller number\n");
else
{
printf("c is a bigger number");
}
return 0;
}
