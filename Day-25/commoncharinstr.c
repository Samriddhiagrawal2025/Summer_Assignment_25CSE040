
  #include <stdio.h>

int main() {
    char str1[100], str2[100];
    int freq[256] = {0};

    printf("Enter first string: ");
    scanf("%99s", str1);

    printf("Enter second string: ");
    scanf("%99s", str2);

    // Mark characters present in the first string
    for (int i = 0; str1[i] != '\0'; i++) {
        freq[(unsigned char)str1[i]] = 1;
    }

    printf("Common characters: ");

    // Print common characters only once
    for (int i = 0; str2[i] != '\0'; i++) {
        if (freq[(unsigned char)str2[i]] == 1) {
            printf("%c ", str2[i]);
            freq[(unsigned char)str2[i]] = 2; // Prevent duplicate printing
        }
    }

    printf("\n");

    return 0;
}
