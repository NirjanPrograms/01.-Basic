#include<stdio.h>
int main()
{
	int days,year,week,temp,day;
	printf("\n Enter the number of days : ");
	scanf("%d",&days);
	year=days/365;
	temp=days%365;
	week=temp/7;
	day=temp%7;
	printf("\n %d days : %d years %d weeks %d days",days,year,week,day);
}
