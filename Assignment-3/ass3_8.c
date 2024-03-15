#include<stdio.h>
int main()
{
	int i,j,num,primeno;
	printf("please enter a number to find factors\n");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		if(num%i==0)
		{
			primeno=1;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					primeno=0;
					break;
				}
			}
			if(primeno==1)
			{
				printf("\n %d is a prime factor",i);
			}
		}
	}
	return 0;
}








/*#include <stdio.h>

  int main()
  {
  int i, j, Number, isPrime;

  printf("\n Please Enter any number to Find Factors :  ");
  scanf("%d", &Number);

  for (i = 2; i <= Number; i++)
  {
  if(Number % i == 0)
  {
  isPrime = 1;
  for (j = 2; j <= i/2; j++)
  {
  if(i % j == 0)
  {
  isPrime = 0;
  break;
  }
  }
  if(isPrime == 1)
  {
  printf("\n %d is a Prime Factor ", i);
  }
  }
  }
  return 0;
  }*/
