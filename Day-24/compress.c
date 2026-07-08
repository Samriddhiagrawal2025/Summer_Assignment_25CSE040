#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count;

    printf("Enter a string: ");
    scanf("%99s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        count = 1;

        while (i < n - 1 && str[i] == str[i + 1]) {
            count++;
            i++;
        }

        printf("%c%d", str[i], count);
    }

    printf("\n");

    return 0;
}
