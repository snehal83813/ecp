#include<stdio.h>
int main()
{
int n,i=1;
printf("enter a number:");
scanf("%d",&n);
while(i<n)
{
if(n % i==0)
{
if(i<=n/i)
printf("%d *%d=%d\n",i,n/i,n);
}
i++;
}
return 0;
}









/*#include<stdio.h>
#include<conio.h>
int main()
{
 int n,k=1,j;
 clrscr();
 printf("Enter the number\n");
 scanf("%d",&n);
 while(k<n)
 {
 if(n%k==0)
 {
 if(k<n/k)
 printf("%d * %d = %d\n",k,n/k,n);
 }
   k++;
 }

  getch();
  return 0;
}*/
