 #include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char author[50];
    int issued;   // 0 = available, 1 = issued
};

int main() {
    struct Book b[100];
    int n = 0, choice, i, id, found;
    char search[50];

    while (1) {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book by Title\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {

        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[n].id);
            getchar();

            printf("Enter Title: ");
            fgets(b[n].title, sizeof(b[n].title), stdin);
            b[n].title[strcspn(b[n].title, "\n")] = '\0';

            printf("Enter Author: ");
            fgets(b[n].author, sizeof(b[n].author), stdin);
            b[n].author[strcspn(b[n].author, "\n")] = '\0';

            b[n].issued = 0;
            n++;

            printf("Book added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No books available.\n");
            } else {
                printf("\nID\tTitle\t\tAuthor\t\tStatus\n");
                printf("-----------------------------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t\t%s\t\t%s\n",
                           b[i].id,
                           b[i].title,
                           b[i].author,
                           b[i].issued ? "Issued" : "Available");
                }
            }
            break;

        case 3:
            printf("Enter Book Title to Search: ");
            fgets(search, sizeof(search), stdin);
            search[strcspn(search, "\n")] = '\0';

            found = 0;
            for (i = 0; i < n; i++) {
                if (strcmp(b[i].title, search) == 0) {
                    printf("\nBook Found:\n");
                    printf("ID     : %d\n", b[i].id);
                    printf("Title  : %s\n", b[i].title);
                    printf("Author : %s\n", b[i].author);
                    printf("Status : %s\n", b[i].issued ? "Issued" : "Available");
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    if (b[i].issued == 0) {
                        b[i].issued = 1;
                        printf("Book issued successfully.\n");
                    } else {
                        printf("Book already issued.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 5:
            printf("Enter Book ID to Return: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (b[i].id == id) {
                    if (b[i].issued == 1) {
                        b[i].issued = 0;
                        printf("Book returned successfully.\n");
                    } else {
                        printf("Book was not issued.\n");
                    }
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Book not found.\n");
            break;

        case 6:
            printf("Exiting system...\n");
            return 0;

        default:
            printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}