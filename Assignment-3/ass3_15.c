#include<stdio.h>
int main()
{
int num1,num2,option,result;
do
{
printf("\nselect the operation:");
printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Stop\n");
scanf("%d",&option);
if(option ==5)
{
break;
}
switch(option)
{
case 1:
printf("enter the first number:\n");
scanf("%d",&num1);
printf("enter the second number:\n");
scanf("%d",&num2);
printf("The addition of %d and %d is %d\n",num1,num2);
result=num1+num2;
break;

case 2:
printf("enter the first number:\n");
scanf("%d",&num1);
printf("enter the second number:\n");
scanf("%d",&num2);
printf("The subtraction of %d and %d is %d\n",num1,num2);
result=num1-num2;
break;

case 3:
printf("enter the first number:\n");
scanf("%d",&num1);
printf("enter the second number:\n");
scanf("%d",&num2);
printf("The multiplication of %d and %d is %d\n",num1,num2);
result=num1*num2;
break;

case 4:
printf("enter the first number:\n");
scanf("%d",&num1);
printf("enter the second number:\n");
scanf("%d",&num2);

if(num2==0)
{
printf("Error\n");
}
else
{
printf("The division of 5d and %d is %d\n",num1,num2);
result=num1/num2;
}
break;

default:
printf("Invalid operation:");
break;
}
while(option!=5);
}
}
