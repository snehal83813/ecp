#include<stdio.h>
int dayofweek(int d,int m,int y);
int main()
{
	int d,m,y,day,week;
	printf("enter the date");
	scanf("%d",&d);
	printf("enter the month");
	scanf("%d",&m);
	printf("enter the year");
	scanf("%d",&y);
	 
	day=dayofweek(d,m,y);
	printf("%d\n",day);
	switch(day)
	{
		case 1:
			printf("it is sunday",week);
			break;
		case 2:
			printf("it is monday",week);
			break;
		case 3:
			printf("it is tuesday",week);
			break;
		case 4:
			printf("it is wednesday",week);
			break;
		case 5:
			printf("it is thursday",week);
			break;
		case 6:
			printf("it is friday",week);
			break;
		case 7:
			printf("it is saturday",week);
			break;
	}
	return 0;
}
int dayofweek(int d,int m,int y)
{
static int t[]={0,3,2,5,0,3,5,1,4,6,2,4};
y=m,3;
return(y+y/4-y/100+y/400+t[m-1]+d)%7;
}
