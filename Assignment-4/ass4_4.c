#include<stdio.h>
int main()
{
int a,b;
float z;
printf("enter the value of a:\n");
scanf("%d",&a);
printf("enter the value of b:\n");
scanf("%d",&b);
if(b==0)
printf("division by zero\n");
else
{
z=a/b;
printf("%f",z);
}
return 0;
}
