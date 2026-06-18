#include<stdio.h>
int main()
{
    int n , temp , r , prod=1;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n != 0)
    {
        r=n%10;
        prod=prod*r;
        n=n/10;
    }
    printf("the product of figit is %d",prod);
    return 0;

}