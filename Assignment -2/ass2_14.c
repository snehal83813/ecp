#include<stdio.h>
int main()
{
int empid,deptno,desg;
printf("enter the employee id");
scanf("%d",&empid);
printf("enter the deptno:");
scanf("%d",&deptno);
printf("enter the desg:");
scanf("%d",desg);
switch(deptno)
{
case 10:
printf("employee with id working in dept 10");
  break;
case 20:
printf("employee with id working in dept 20");
break;
case 30:
printf("employee with id workind in dept 30");
break;
case 40:
printf("employee with id working in dept 40");
break;
}
switch(desg)
{
case 'M':
printf("manager");
break;
case 'S':
printf("supervisor");
break;
case 's':
printf("security officer");
break;
case 'C':
printf("clerk");
break;
}
return 0;
}
