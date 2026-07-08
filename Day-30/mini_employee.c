 #include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
    char department[50];
    float salary;
};

int main() {
    struct Employee e[100];
    int n = 0, choice, i, id, found;
    char search[50];

    while (1) {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee by Name\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

        case 1:
            printf("Enter Employee ID: ");
            scanf("%d", &e[n].id);
            getchar();

            printf("Enter Name: ");
            fgets(e[n].name, sizeof(e[n].name), stdin);
            e[n].name[strcspn(e[n].name, "\n")] = '\0';

            printf("Enter Department: ");
            fgets(e[n].department, sizeof(e[n].department), stdin);
            e[n].department[strcspn(e[n].department, "\n")] = '\0';

            printf("Enter Salary: ");
            scanf("%f", &e[n].salary);

            n++;
            printf("Employee added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No employee records found.\n");
            } else {
                printf("\nID\tName\t\tDepartment\tSalary\n");
                printf("-------------------------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\t\t%.2f\n",
                           e[i].id,
                           e[i].name,
                           e[i].department,
                           e[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Name to Search: ");
            fgets(search, sizeof(search), stdin);
            search[strcspn(search, "\n")] = '\0';

            found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(e[i].name, search) == 0) {
                    printf("\nEmployee Found:\n");
                    printf("ID         : %d\n", e[i].id);
                    printf("Name       : %s\n", e[i].name);
                    printf("Department : %s\n", e[i].department);
                    printf("Salary     : %.2f\n", e[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found.\n");
            break;

        case 4:
            printf("Enter Employee ID to Update Salary: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (e[i].id == id) {
                    printf("Current Salary: %.2f\n", e[i].salary);
                    printf("Enter New Salary: ");
                    scanf("%f", &e[i].salary);
                    printf("Salary updated successfully.\n");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Employee not found.\n");
            break;

        case 5:
            printf("Exiting system...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
