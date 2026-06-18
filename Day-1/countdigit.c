#include <stdio.h>

int main()
{
    int n, temp, count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    temp = n;

    while(n != 0)
    {
        n = n / 10;
        count++;
    }

    printf("The number of digits in %d is %d\n", temp, count);

    return 0;
}