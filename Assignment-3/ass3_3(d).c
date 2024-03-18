#include<stdio.h>
int main()
{
int num,originalnum,remainder,result;
printf("enter a number:");
scanf("%d",&num);
while(num!=0)
{
remainder=originalnum%10;
result=remainder*remainder*remainder;
originalnum/=10;
}
if(result==num)
printf("%d is an armstrong number",num);
else
printf("%d is not an armstrong number",num);
return 0;
}
