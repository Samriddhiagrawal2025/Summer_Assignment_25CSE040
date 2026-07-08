
#include <stdio.h>

// Function to print Fibonacci series
void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive number\n");
    } else {
        fibonacci(n);
    }

    return 0;
}

  