#include<stdio.h>
int main()
{
int a,b;
char opt;


printf("enter operator:");
scanf("%c",&opt);


if(opt=='+')
{
printf("you have selected addition");
}
else if(opt=='-')
{
printf("you have selected subtraction");
}
else if(opt=='*')
{
printf("you have selected multiplication");
}
else if(opt=='/')
{
printf("you have selected division");
}



printf (" \n Enter the first number: ");
    scanf(" %d", &a); 
    printf (" Enter the second number: ");
    scanf (" %d", &b);
int res;

switch(opt)
{
case '+':
res=a+b;
printf("the addition of%d+%d=%d",a,b,res);

case '-':
res=a-b;
printf("the subtraction of%d-%d=%d",a,b,res);

case '*':
res=a*b;
printf("the multiplication of%d*%d=%d",a,b,res);

case '/':
res=a/b;
printf("the division of%d/%d=%d",a,b,res);

default:
printf("invalid operator");
}
return 0;
}
