#include<stdio.h>
int main()
{
int num;
int i=1,j=1;
printf("enter you number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
for(j=1;j<=num;j++)
{
printf("*");
}
printf("\n");
}
return 0;
}
