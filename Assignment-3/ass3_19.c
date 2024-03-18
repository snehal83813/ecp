#include<stdio.h>
int main()
{
int a,b,i,j;
printf("enter starting number:");
scanf("%d",&a);
printf("enter ending number:");
scanf("%d",&b);
for(i=a;i<=b;i++)
{
for(j=1;j<=10;j++)
{
printf("%d\n",i*j);
}
printf("\n\n");
}
return 0;
}
