#include<stdio.h>
int main()
{
    int n , temp , rev=0 , r;
    printf("enter the number:");
    scanf("%d",&n);
    temp=n;
    while (n!=0)
    {
        r=n%10;
        rev= (rev*10)+r;
        n=n/10;
    }
    printf("the reverse is: %d",rev);
    return 0;
}