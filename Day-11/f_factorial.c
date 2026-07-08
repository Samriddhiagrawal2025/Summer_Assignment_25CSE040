#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    int i, fact = 1;

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers\n");
    } else {
        result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}