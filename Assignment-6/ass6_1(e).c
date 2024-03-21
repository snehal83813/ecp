#include<stdio.h>
#include<string.h>
int main()
{
char str[20];
char ch;
char *ptr;
printf("enter character:");
scanf("%c",&ch);
printf("str=%s\n",str);
ptr=strchr(str,ch);
if(ptr==NULL)
printf("character is not found");
else
{
printf("character is found");
printf("ptr=%u\n",ptr);
printf("ptr=%c\n",*ptr);
printf("ptr=%s\n",ptr);
}
return 0;
}
