#include<stdio.h>
int main()
{
    int start , end , temp , i ,j,flag;
    printf ("Enter the starting and eng=ding values of range:");
    scanf("%d%d", &start , & end);
    if (start>end)
    {
    temp=start;
    start=end;
    end=temp;
    }
    for(i=start;i<=end;i++)
    {
      flag=0;
        for(j=2;j<i;j++)
        {
        if(i%j==0)
        {
           flag=flag+1;
           break;
        }
        }
    
    if(flag==0)
  {
  printf("%d  ",i);
  }
}
return 0;
} 

