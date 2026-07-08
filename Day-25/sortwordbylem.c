#include <stdio.h>
#include <string.h>

int main() {
    char words[100][50], temp[50];
    int n;

    printf("Enter the number of words: ");
    scanf("%d", &n);

    printf("Enter the words:\n");
    for (int i = 0; i < n; i++) {
        scanf("%49s", words[i]);
    }

    // Sort words by length
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(words[i]) > strlen(words[j])) {
                strcpy(temp, words[i]);
                strcpy(words[i], words[j]);
                strcpy(words[j], temp);
            }
        }
    }

    printf("\nWords sorted by length:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}