#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	char ch;
	int i,j,len;
	printf("please enter a string:");
	scanf("%s\n",str);
	printf("enter character that you want to remove:");
	scanf("%c\n",&ch);
	len=strlen(str);
	for(i=0;i<=len;i++)
	{
		if(str[i]==ch)
		{
			for(j=i;j<=len;j++)
			{
				str[j]=str[j+1];
			}
			len--;
			i--;
		}
	}
	printf("\n the final string after removing all occurances of %c=%s",ch,str);
	return 0;
}

