#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n Enter a number : ");
	scanf("%d",&a);
	printf("\n Enter another number : ");
	scanf("%d",&b);
	printf("\n Before Swapping : a=%d \t b=%d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\n After Swapping : a=%d \t b=%d",a,b);
}
