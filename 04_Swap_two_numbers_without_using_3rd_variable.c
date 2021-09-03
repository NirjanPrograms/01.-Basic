#include<stdio.h>
int main()
{
	int a,b;
	printf("\n Enter a number : ");
	scanf("%d",&a);
	printf("\n Enter another number : ");
	scanf("%d",&b);
	printf("\n Before Swapping : a=%d \t b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n After Swapping : a=%d \t b=%d",a,b);
}
