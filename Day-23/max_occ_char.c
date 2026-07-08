 #include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int max = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%99s", str);

    // Count frequency of each character
    for (int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find the maximum occurring character
    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;
}