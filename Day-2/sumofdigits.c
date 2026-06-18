#include<stdio.h>
int main()
{
    int n , temp , sum=0 , r;
    printf("enter the number: ");
    scanf("%d",&n);
    temp=n;
    while (n != 0)
    {
      
      r=n%10;
      sum=sum+r;
      n=n/10;
    }
    printf("the sum of digits= %d", sum);
    return 0;
}