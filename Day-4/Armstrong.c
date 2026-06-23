#include<stdio.h>
int main()
{
int n , temp , r ,arm=0;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{
    r=n%10;
    arm=(r*r*r)+arm;
    n=n/10;
}
if(arm==temp)
   printf("IT IS A ARMSTRONG NUMBER");
else
   printf("IT IS NOT A ARMSTRONG NUMBER");
return 0;
}