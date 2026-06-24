#include<stdio.h>
int main()
{
    int n , i , fac,j,flag,max;
    printf("enter the number  ");
    scanf("%d",&n);
    printf("THE LARGEST PRIME FACTOR IS::  ");
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            fac=i;
            flag=0;
            for(j=2;j<fac;j++) 
            {
                if(fac%j==0)
                {
                    flag=flag+1;
                    break;
                }
            }
                if(flag==0)
            {
                max=fac;
            }
            }    
        }
    printf("%d",max);
    return 0;
}