#include<stdio.h>
int main()
{
    int n , temp , r ,rev=0;
    printf("enetr the number ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==temp)
    printf("the number is palindrome");
    else
    printf("the number is not palindrome");
    return 0;
}