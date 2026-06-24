#include<stdio.h>
int main()
{
    int n , i ;
    printf("enter the number  ");
    scanf("%d",&n);
    printf("THE FACTORS ARE::  ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\n",i);       
        }
    }
    return 0;
}