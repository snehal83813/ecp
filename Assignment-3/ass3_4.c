#include<stdio.h>
int main()
{
	int num,i,fact=1;
	printf("enter a number to find factorial of that number:\n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("the number is negative,error!!");
	}
	else
		for(i=1; i<=num; i++)
		{
			fact = fact*i;
		}
   			printf("the factorial of %d is %d\n",num,fact);
	return 0;
}
