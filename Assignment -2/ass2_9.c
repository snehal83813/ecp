#include<stdio.h>
int main()
{

int month,year;

printf("enter a particular year");
scanf("%d",&year);

printf("enter a particular month");
scanf("%d",&month);

 if(month==1)
{
 printf("the month has 31 days");
}

else if(month==4)
{
  printf("the month has 30 days");
}

else
{
 printf("the month is invalid");
}

  return 0;
  }
