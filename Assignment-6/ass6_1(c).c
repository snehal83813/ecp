#include<stdio.h>
#include<string.h>
int main()
{
char str1[20];
char str2[20];
printf("enter string1:");
scanf("%s\n",str1);
printf("enter string2:");
scanf("%s\n",str2);
printf("before strcat:str1=%s,str2=%s\n",str1,str2);
strcat(str1,str2);
printf("after strcat:str1=%s,str2=5s\n",str1,str2);
return 0;
}
