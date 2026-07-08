 #include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    char branch[50];
    float marks;
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, found;
    char search[50];

    while (1) {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student by Name\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline

        switch (choice) {

        case 1:
            printf("Enter Roll Number: ");
            scanf("%d", &s[n].roll);
            getchar();

            printf("Enter Name: ");
            fgets(s[n].name, sizeof(s[n].name), stdin);
            s[n].name[strcspn(s[n].name, "\n")] = '\0';

            printf("Enter Branch: ");
            fgets(s[n].branch, sizeof(s[n].branch), stdin);
            s[n].branch[strcspn(s[n].branch, "\n")] = '\0';

            printf("Enter Marks: ");
            scanf("%f", &s[n].marks);

            n++;
            printf("Student added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No records found.\n");
            } else {
                printf("\nRoll\tName\t\tBranch\t\tMarks\n");
                printf("-------------------------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\t\t%.2f\n",
                           s[i].roll,
                           s[i].name,
                           s[i].branch,
                           s[i].marks);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            fgets(search, sizeof(search), stdin);
            search[strcspn(search, "\n")] = '\0';

            found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(s[i].name, search) == 0) {
                    printf("\nStudent Found:\n");
                    printf("Roll   : %d\n", s[i].roll);
                    printf("Name   : %s\n", s[i].name);
                    printf("Branch : %s\n", s[i].branch);
                    printf("Marks  : %.2f\n", s[i].marks);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Student not found.\n");
            }
            break;

        case 4:
            printf("Exiting program...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}