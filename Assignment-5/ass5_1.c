#include<stdio.h>
int main()
{
float num[100],sum=0.0,avg;
int n,i;
printf("enter the numbers:");
scanf("%d",&n);
while(n>100||n<1)
{
printf("error!number should in range of (q to 100)\n");
printf("enter the number again:");
scanf("%d",&n);
}
for(i=0;i<n;++i)
{
printf("%d,enter number:",i+1);
scanf("%f",&num[i]);
sum+=num[i];
}
avg=sum/n;
printf("average=%.2f",avg);
return 0;
}


