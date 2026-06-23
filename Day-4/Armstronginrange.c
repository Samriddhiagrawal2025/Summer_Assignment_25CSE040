#include<stdio.h>
int main()
{
int lower , upper, r ,arm,n,temp;
printf("enter the range");
scanf("%d%d",&lower, &upper);
for (n=lower ; n<=upper;n++)
{
   temp=n;
   arm=0;

    while(temp>0)
    {
    r=temp%10;
    arm=(r*r*r)+arm;
    temp=temp/10;
    }
    
        if(arm==n)
        {
        printf("%d  ",n);
        }
    
}
return 0;
}
