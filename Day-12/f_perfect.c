
  #include <stdio.h>

// Function to check perfect number
int isPerfect(int n) {
    int i, sum = 0;

    for (i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == n)
        return 1;  // Perfect number
    else
        return 0;  // Not perfect
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Enter a positive number\n");
    } else {
        if (isPerfect(num))
            printf("%d is a Perfect number\n", num);
        else
            printf("%d is not a Perfect number\n", num);
    }

    return 0;
}