#include<stdio.h>
int main()
{
	int n;
	printf("\n Enter a year : ");
	scanf("%d",&n);
	if(n%4==0)
		printf("\n %d is leap year.",n);
	else
		printf("\n %d is not leap year.",n);
}
