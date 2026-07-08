
#include <stdio.h>

// Function to check Armstrong number
int isArmstrong(int n) {
    int original = n, remainder, result = 0;

    while (n != 0) {
        remainder = n % 10;
        result = result + (remainder * remainder * remainder);
        n = n / 10;
    }

    if (result == original)
        return 1;  // Armstrong
    else
        return 0;  // Not Armstrong
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number\n", num);
    else
        printf("%d is not an Armstrong number\n", num);

    return 0;
}
  