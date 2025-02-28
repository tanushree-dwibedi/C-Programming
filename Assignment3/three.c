#include <stdio.h>

int main() {
    char item;
    int id, one, two, three, four, transition, amount;

    // Initial Inventory Input
    printf("Given:\n Piels ID 1,\n Coors ID 2,\n Bud ID 3,\n Iron City ID 4\n");
    printf("Enter case inventory for each brand for the start of the week.\n");
    
    printf("Piels- ");
    scanf("%d", &one);
    
    printf("Coors- ");
    scanf("%d", &two);
    
    printf("Bud- ");
    scanf("%d", &three);
    
    printf("Iron City- ");
    scanf("%d", &four);

    // Number of Transactions
    printf("Enter the number of transactions: ");
    scanf("%d", &transition);

    // Processing Each Transaction
    for (int i = 1; i <= transition; i++) {
        printf("Enter brand ID: ");
        scanf("%d", &id);
        
        printf("Enter 'p' for item purchased or 's' for item sold: ");
        scanf(" %c", &item);  // Space before %c to handle newline

        printf("Enter the amount purchased or sold: ");
        scanf("%d", &amount);

        // Update Inventory Based on Transaction Type
        if (item == 'p') {
            if (id == 1) {
                one += amount;
            } else if (id == 2) {
                two += amount;
            } else if (id == 3) {
                three += amount;
            } else if (id == 4) {
                four += amount;
            }
        } else if (item == 's') {
            if (id == 1) {
                one -= amount;
            } else if (id == 2) {
                two -= amount;
            } else if (id == 3) {
                three -= amount;
            } else if (id == 4) {
                four -= amount;
            }
        } else {
            printf("Invalid transaction type entered.\n");
        }
    }

    // Display Final Inventory
    printf("\nFinal Inventory:\n");
    printf("Piels (ID 1): %d cases\n", one);
    printf("Coors (ID 2): %d cases\n", two);
    printf("Bud (ID 3): %d cases\n", three);
    printf("Iron City (ID 4): %d cases\n", four);

    return 0;
}
