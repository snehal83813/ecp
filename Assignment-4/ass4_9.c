#include<stdio.h>
int isPrime(int num);
void printPrimes(int lowerlimit,int upperlimit);
int main()
{
int lowerlimit,upperlimit;
printf("enter the lower and upper limit to list primes:");
scanf("%d%d",&lowerlimit ,&upperlimit);
printPrimes(lowerlimit,upperlimit);
return 0;
}

