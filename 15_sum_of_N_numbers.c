#include<stdio.h>

int main()
{
    int l,u,s=0,i;
    printf("\n Enter the lower range : ");
    scanf("%d",&l);
    printf("\n Enter the upper range : ");
    scanf("%d",&u);

    for(i=l ; i<=u ; i++){
        s += i;
    }
    printf("\n Sum of natural numbers between %d and %d is : %d",l,u,s);
    return 0;
}