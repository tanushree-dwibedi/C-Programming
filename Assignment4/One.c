// Write a program for an automatic teller machine that dispenses money. The user should enter
//  the amount desired (a multiple of 10 dollars) and the machine dispenses this amount using
//  the least number of bills. The bills dispensed are 50s, 20s, and 10s. Write a function that
//  determines how many of each kind of bill to dispense.


#include <stdio.h>
void bills(int amount , int *fifties , int *twenties , int *tens){
    *fifties = amount / 50; // Calculate the number of $50 bills
    amount %= 50;           // Update the remaining amount

    *twenties = amount / 20; // Calculate the number of $20 bills
    amount %= 20;            // Update the remaining amount

    *tens = amount / 10;    // Calculate the number of $10 bills
}

int main() {
    int amount;
    int fifties , twenties , tens;

    printf("Welcome to the ATM!\n");
    printf("Enter the amount to withdraw (multiple of 10): ");
    scanf("%d", &amount);

    // Validate the input
    if (amount % 10 != 0) {
        printf("Error: The amount must be a multiple of 10.\n");
        return 1; // Exit the program with an error code
    }

    // Calculate the bills
    bills(amount, &fifties, &twenties, &tens);

    // Print the result
    printf("Bills dispensed: %d x $50, %d x $20, %d x $10\n", fifties, twenties, tens);

    return 0;
}