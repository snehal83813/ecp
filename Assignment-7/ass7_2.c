#include<stdio.h>
int main()
{
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;
system("cls");
printf("enter the number of row");
scanf("%d",&r);
printf("enter the number of column");
scanf("%d",&c);
printf("enter the first matrix element\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("enter the second matrix element\n");
for(i=0;i<r;i++);
{
for(j=0;j<c;j++)
}
}
printf("multiply of matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
mul[i][j]=0;
for(k=0;k<c;k++)
{
mul[i][j]=a[i][j]*b[i][j];
}
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d",mul[i][j]);
}
printf("\n");
}
return 0;
}
