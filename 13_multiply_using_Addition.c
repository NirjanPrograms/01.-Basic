// Print multiplication by using addition
#include<stdio.h>
int main()
{
	int a,b,i,mult=0;
	printf("\n Enter a number : ");
	scanf("%d",&a);
	printf("\n Enter another number : ");
	scanf("%d",&b);
	if(a>0 && b>0 || a<0 && b<0)
	{
		if(a<0)
			a=-a;
		if(b<0)
			b=-b;
		for(i=1 ; i<=a ; i++)
		{
			mult=mult+b;
		}
		printf("\n %d",mult);
	}
	else 
	{
		if(a<0)
			a=-a;
		if(b<0)
			b=-b;
		for(i=1 ; i<=a ; i++)
		{
			mult=mult+b;
		}
		printf("\n -%d",mult);
	}
}
