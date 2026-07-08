#include <stdio.h>

int main() {
    char str[100];
    int visited[256] = {0};

    printf("Enter a string: ");
    scanf("%99s", str);

    printf("String after removing duplicates: ");

    for (int i = 0; str[i] != '\0'; i++) {
        if (visited[(unsigned char)str[i]] == 0) {
            printf("%c", str[i]);
            visited[(unsigned char)str[i]] = 1;
        }
    }

    printf("\n");

    return 0;
}