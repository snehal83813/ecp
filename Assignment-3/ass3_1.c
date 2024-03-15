#include<stdio.h>
int main()
{
int num,i;
char ch;
printf("enter a character you want to repeat");
scanf("%c",&ch);
printf("enter how many times you want");
scanf("%d",&num);
for(i=0;i<10;i++)
{
printf("%c",ch);
}
return 0;
}
