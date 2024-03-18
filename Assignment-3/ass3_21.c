#include<stdio.h>
int main()
{
int i,num,count;
printf("enter a number:");
scanf("%d",&num);
for(i=2;i<=5;i++)
{
 if(num%i==0)
 {
 count++;
 break;
 }
 }
 if(count==0 && num!=1)
 {
 printf("%d",num);
 }
 return 0;
 }
