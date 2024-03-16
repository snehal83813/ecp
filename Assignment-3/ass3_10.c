#include<stdio.h>
int main()
{
int num,i,tab;
printf("enter a number:");
scanf("%d",&num);
printf("\n table of %d is:\n",num);
for(i=1;i<=10;i++)
{
tab=num*i;
printf("%d*%2d=%2d\n",num,i,tab);
}
return 0;
}
