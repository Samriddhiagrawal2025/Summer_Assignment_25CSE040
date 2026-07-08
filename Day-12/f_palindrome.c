#include <stdio.h>

// Function to check palindrome
int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;

    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n = n / 10;
    }

    if (original == reversed)
        return 1;  // palindrome
    else
        return 0;  // not palindrome
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome number\n", num);
    else
        printf("%d is not a Palindrome number\n", num);

    return 0;
}

  