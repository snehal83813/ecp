#include<stdio.h>
int main()
{
int i,j,rows,columns;
printf("enter the number of rows:");
scanf("%d",&rows);
for(i=1;i<=rows;i++)
{
for(j=1;j<=i;j++)
{
for(i=rows;i>=1;--i)
{
for(j=1;j<=i;++j)
{
printf("*");
}
printf("\n");
}
break;
}
}
return 0;
}
