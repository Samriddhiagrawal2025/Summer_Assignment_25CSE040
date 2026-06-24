#include<stdio.h>
int main()
{
    int n , sum , i;
    printf("enter the number : ");
    scanf("%d",&n);
    sum=0;
    printf("Factors are: ");
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    if(sum==n)
       printf("IT IS A PERFECT NUMBER");
    else
        printf("IT IS NOT A PERFECT NUMBER");
return 0;
    }