#include<stdio.h>
#include<string.h>
int main()
{
char str[20]="PG-DESD";
char ch;
char *ptr;
printf("enter character:");
printf("str=%s\n",strstr);
ptr=strchr(str,ch);
if(ptr==NULL)
printf("character is not found\n");
else
{
printf("character is found\n");
printf("ptr=%u\n",ptr);
printf("*ptr=%c\n",*ptr);
printf("ptr=%s\n",ptr);
}
return 0;
}
