  #include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[100];
    int choice, len, i;

    while (1) {
        printf("\n===== MENU DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // to consume newline

        switch (choice) {

        case 1:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            len = strlen(str1);
            printf("Length = %d\n", len);
            break;

        case 2:
            printf("Enter source string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            strcpy(str2, str1);
            printf("Copied string = %s\n", str2);
            break;

        case 3:
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            strcat(str1, str2);
            printf("Concatenated string = %s\n", str1);
            break;

        case 4:
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            if (strcmp(str1, str2) == 0)
                printf("Strings are equal.\n");
            else if (strcmp(str1, str2) > 0)
                printf("First string is greater.\n");
            else
                printf("Second string is greater.\n");
            break;

        case 5:
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            len = strlen(str1);

            for (i = 0; i < len; i++) {
                temp[i] = str1[len - i - 1];
            }
            temp[len] = '\0';

            printf("Reversed string = %s\n", temp);
            break;

        case 6:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}