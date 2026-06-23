#include <stdio.h>
int main()
{
    int n, i = 2, a = 0, b = 1, c;
    printf("Enter the value of n: ");
    scanf("%d", &n);
if (n == 1)
        printf("The %dth Fibonacci term is %d", n, a);
else if (n == 2)
        printf("The %dth Fibonacci term is %d", n, b);
else
    {
        while (i < n)
        {
            c = a + b;
            a = b;
            b = c;
            i++;
        }
        printf("The %dth Fibonacci term is %d", n, b);
    }
   return 0;
}