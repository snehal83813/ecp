#include<stdio.h>
#include<string.h>
int main()
{
	size_t my_strlen(const char *s);
	char str[20];
		size_t len;
	printf("enter string:");
	scanf("%s",str);
	printf("str=%s\n",str);
	len=my_strlen(str);
	printf("length=%d\n",len);
	return 0;
	}
	size_t my_strlen(const char *s)
	{
		size_t length=0;
		for(int i=0;s[i]!='\0';i++)
			length++;
		return length;
	}
