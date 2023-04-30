#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("enter the valuue of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum+=i;
    }
    printf("sum of %d natural numbers is %d",n,sum);
    return 0;
}