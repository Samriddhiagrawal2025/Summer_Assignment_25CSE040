#include <stdio.h>

int main() {
    char str[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        // If current character is not space and next character is space or end
        if (str[i] != ' ' && str[i] != '\n') {
            if (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0') {
                words++;
            }
        }
    }

    printf("Total words = %d\n", words);

    return 0;
} 
