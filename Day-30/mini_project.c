#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student {
    int roll;
    char name[50];
    char branch[50];
    float marks;
};

struct Student s[MAX];
int n = 0;

/* Function prototypes */
void addStudent();
void displayStudents();
void searchStudent();
void updateMarks();
void deleteStudent();

int main() {
    int choice;

    while (1) {
        printf("\n===== MINI STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Update Marks\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: updateMarks(); break;
            case 5: deleteStudent(); break;
            case 6:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

/* Add Student */
void addStudent() {
    printf("Enter Roll No: ");
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
    printf("Student added successfully!\n");
}

/* Display Students */
void displayStudents() {
    if (n == 0) {
        printf("No records found.\n");
        return;
    }

    printf("\nRoll\tName\t\tBranch\t\tMarks\n");
    printf("-------------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].branch,
               s[i].marks);
    }
}

/* Search Student */
void searchStudent() {
    char name[50];
    int found = 0;

    printf("Enter name to search: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < n; i++) {
        if (strcmp(s[i].name, name) == 0) {
            printf("\nStudent Found:\n");
            printf("Roll  : %d\n", s[i].roll);
            printf("Name  : %s\n", s[i].name);
            printf("Branch: %s\n", s[i].branch);
            printf("Marks : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

/* Update Marks */
void updateMarks() {
    int roll, found = 0;

    printf("Enter Roll No to update marks: ");
    scanf("%d", &roll);

    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            printf("Current Marks: %.2f\n", s[i].marks);
            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);
            printf("Marks updated successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}

/* Delete Student */
void deleteStudent() {
    int roll, found = 0;

    printf("Enter Roll No to delete: ");
    scanf("%d", &roll);

    for (int i = 0; i < n; i++) {
        if (s[i].roll == roll) {
            for (int j = i; j < n - 1; j++) {
                s[j] = s[j + 1];
            }
            n--;
            printf("Student deleted successfully!\n");
            found = 1;
            break;
        }
    }

    if (!found)
        printf("Student not found.\n");
}