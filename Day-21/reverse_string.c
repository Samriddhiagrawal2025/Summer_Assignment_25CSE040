 #include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;

    printf("Enter a string: ");
    gets(str);  // Note: gets is unsafe but used for simplicity in basic programs

    len = strlen(str);

    printf("Reversed string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}
