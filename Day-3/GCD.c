gcd(int n1 , int n2)
{
  int i , gcd;
  for (i=1 ; i<=n1&&i<=n2;i++)
  {
    if(n1%i==0 && n2%i==0)
    {
        gcd=i;
    }
}
    printf(" The GCD of %d and %d is %d",n1,n2,gcd);
  
}
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter the numbers n1 and n2 ");
    scanf("%d%d",&n1,&n2);
    gcd(n1,n2);
    return 0;
}