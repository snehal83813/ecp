#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d"&n);
if(n==1)
{
printf("1 is neither prime nor composite");
}
int count=0;
for(int i=2;i<n;i++)
{
if(n%i==0)
count++;
}
if(count==0)
{
printf("%d is a prime number",n);
}
else
{
printf("%d is not a prime number");
}
return 0;
}
