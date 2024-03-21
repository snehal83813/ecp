#include<stdio.h>
#include<string.h>
int main()
{
char str[65]="i am in sunbeam college";
char substr[4]="am";
char *ptr=strstr(str,substr);
printf("str=%u\n",str);
printf("ptr=%u\n",ptr);
printf("ptr=%s\n",ptr);
return 0;
}
