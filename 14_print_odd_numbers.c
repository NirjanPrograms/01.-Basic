#include<stdio.h>

int main()
{
    int n,i;
    printf("\n Enter a range : ");
    scanf("%d",&n);
    printf("\n Odd numbers upto %d are : ",n);
    for (i=1 ; i<=n ; i++){
        if(i%2 != 0){
            printf("%d, ",i);
        }
    }
    return 0;
}