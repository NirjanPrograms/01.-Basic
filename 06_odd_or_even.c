#include<stdio.h>
int main()
{
	int n;
	printf("\n Enter a number to check even or odd : ");
	scanf("%d",&n);
	if(n==0)
		printf("\n You entered 0.");
	else if(n%2==0)
		printf("\n %d is an even number.",n);
	else
		printf("\n %d is an odd number.",n);
}
