#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("\n Enter 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
			max=a;
		else
			max=c;
	}
	else
	{
		if(b>c)
			max=b;
		else
			max=c;
	}
	printf("\n Maximum number between %d, %d & %d is : %d",a,b,c,max);
}
