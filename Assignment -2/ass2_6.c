#include<stdio.h>
int main()
{
int num,rev,rem,temp;
printf("enter a five digit number");
scanf("%d",&num);
temp=num;
while(num>0)
{
rem=num%10;
rev=rev*10 +rem;
num/=10;
}
printf("given no is %d\n",temp);
printf("its reverse is %d\n",rev);
if(temp==rev)
printf("number is palindrome");
else
{
printf("number is not a palindrome");
}
return 0;
}














/*
#include <stdio.h>
 
void main()
{
    int num, temp, remainder, reverse = 0;
 
    printf("Enter an integer \n");
    scanf("%d", &num);
      original number is stored at temp 
    temp = num;
    while (num > 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    printf("Given number is = %d\n", temp);
    printf("Its reverse is  = %d\n", reverse);
    if (temp == reverse)
        printf("Number is a palindrome \n");
    else
        printf("Number is not a palindrome \n");
		*/
