#include<stdio.h>
int fact(int r);
int main()
{
    int n , r , sum , temp ;
    printf("eneter the number");
    scanf("%d",&n);
    temp=n;
    sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum+fact(r);
        n=n/10;
    }
    if(sum==temp)
    printf("IT IS A STRONG NUMBER");
    else
    printf("IT IS NOT A STRONG NUMBER");
    return 0;
}
int fact(int r)
{
    int f,i;
    f=1;
    for(i=1;i<=r;i++)
    {
        f=f*i;
    }
    return f;
}