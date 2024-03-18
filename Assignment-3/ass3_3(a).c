#include<stdio.h>
int main()
{
int num,sum=0;
printf("enter the number");
scanf("%d",&num);
printf("the number is=%d\n",num);
while(num!=0)
{
sum+=num/10;
}
printf("sum:%d\n",sum);
return 0;
}
