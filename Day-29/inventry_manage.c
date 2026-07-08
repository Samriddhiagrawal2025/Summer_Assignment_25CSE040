  #include <stdio.h>

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    struct Item item[100];
    int n = 0, choice, i, id, found;
    int addQty;

    while (1) {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Item\n");
        printf("2. Display Items\n");
        printf("3. Search Item\n");
        printf("4. Update Item\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        case 1:
            printf("Enter Item ID: ");
            scanf("%d", &item[n].id);

            printf("Enter Item Name: ");
            scanf("%s", item[n].name);

            printf("Enter Quantity: ");
            scanf("%d", &item[n].quantity);

            printf("Enter Price: ");
            scanf("%f", &item[n].price);

            n++;
            printf("Item added successfully.\n");
            break;

        case 2:
            if (n == 0) {
                printf("No items in inventory.\n");
            } else {
                printf("\nID\tName\tQty\tPrice\tTotal Value\n");
                printf("-------------------------------------------------\n");

                for (i = 0; i < n; i++) {
                    printf("%d\t%s\t%d\t%.2f\t%.2f\n",
                           item[i].id,
                           item[i].name,
                           item[i].quantity,
                           item[i].price,
                           item[i].quantity * item[i].price);
                }
            }
            break;

        case 3:
            printf("Enter Item ID to search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (item[i].id == id) {
                    printf("\nItem Found:\n");
                    printf("ID       : %d\n", item[i].id);
                    printf("Name     : %s\n", item[i].name);
                    printf("Quantity : %d\n", item[i].quantity);
                    printf("Price    : %.2f\n", item[i].price);
                    printf("Value    : %.2f\n", item[i].quantity * item[i].price);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Item not found.\n");
            }
            break;

        case 4:
            printf("Enter Item ID to update: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++) {
                if (item[i].id == id) {
                    printf("1. Update Quantity\n2. Update Price\nChoose option: ");
                    scanf("%d", &choice);

                    if (choice == 1) {
                        printf("Enter quantity to add: ");
                        scanf("%d", &addQty);
                        item[i].quantity += addQty;
                        printf("Quantity updated.\n");
                    } else if (choice == 2) {
                        printf("Enter new price: ");
                        scanf("%f", &item[i].price);
                        printf("Price updated.\n");
                    } else {
                        printf("Invalid option.\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Item not found.\n");
            }
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