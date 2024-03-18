#include<stdio.h>
int main()
{
int base,index;
int power=1;
int i;
printf("enter base:");
scanf("%d",&base);
printf("enter index:");
scanf("%d",&index);
for(i=1;i<=index;i++)
{
power=power*base;
}
printf("%d^%d=%d",base,index,power);
return 0;
}
