#include<stdio.h>
int main()
{
    int n1 , n2 , lcm;
    printf("enter the n1 and n2 ");
    scanf("%d%d",&n1 ,&n2);
    if(n1>n2){
        lcm=n1;
    }
    else{
        lcm=n2;
    }
    while(1){
        if(lcm%n1==0 && lcm%n2==0){
           printf("lcm of %d and %d is %d", n1,n2 , lcm);
           break;
        }
        else
        {
            lcm++;
        }
    }
}