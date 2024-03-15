#include<stdio.h>
int main()
{
int year;
printf("enter a year");
scanf("%d",&year);
if(year%4==0)
printf("%d is a leap year\n",year);
else if(year%400==0)
printf("%d is a leap year\n",year);
else if(year%100==0)

printf("%d is not a leap year",year);
else
{
printf("%d is not a leap year");
}
return 0;
}






















/*Write a program to display number of days in the given year. Check condition for leap year. A
year is a leap year if it is divisible by 4 but not by 100, except that years divisible by 400 are leap
years*/
