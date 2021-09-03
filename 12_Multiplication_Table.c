#include<stdio.h>

int main()
{
    int a,mult,i;
    printf("\n Enter a number : ");
    scanf("%d",&a);
    for(i=0 ; i<10 ; i++)
    {
        mult=a*(i+1);
        printf("\n %d*%d = %d",a,i+1,mult);
    }
    return 0;
}