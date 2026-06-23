#include<stdio.h>
int main()
{
    int n , a, b, i,c;
    printf("enter the nth term  ");
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    while(c<=n)
    {
        printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}
