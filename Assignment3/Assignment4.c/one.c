#include <stdio.h>

// Function to determine the number of bills
void dispenseBills(int amount, int *fifties, int *twenties, int *tens) {
    *fifties = amount / 50;      // Number of $50 bills
    amount %= 50;                // Remaining amount

    *twenties = amount / 20;     // Number of $20 bills
    amount %= 20;                // Remaining amount

    *tens = amount / 10;         // Number of $10 bills
}

int main() {
    int amount;
    int fifties, twenties, tens;

    // Prompt the user for the amount
    printf("Enter the amount to withdraw (multiple of 10): ");
    scanf("%d", &amount);

    // Validate the input
    if (amount <= 0 || amount % 10 != 0) {
        printf("Invalid amount. Please enter a positive multiple of 10.\n");
        return 1;
    }

    // Call the function to calculate the bills
    dispenseBills(amount, &fifties, &twenties, &tens);

    // Display the result
    printf("Bills dispensed:\n");
    printf("$50 bills: %d\n", fifties);
    printf("$20 bills: %d\n", twenties);
    printf("$10 bills: %d\n", tens);

    return 0;
}
