
  #include <stdio.h>

// Function to check prime
int isPrime(int n) {
    int i;

    if (n <= 1)
        return 0; // not prime

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 0; // not prime
    }

    return 1; // prime
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPrime(num))
        printf("%d is a Prime number\n", num);
    else
        printf("%d is not a Prime number\n", num);

    return 0;
}
