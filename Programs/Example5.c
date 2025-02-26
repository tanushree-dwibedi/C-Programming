#include <stdio.h>

int main(void) 
{
    // Declare variables for user initials and coin counts
    char first, middle, last; 
    int pennies, nickels, dimes, quarters, dollars; 
    int total_cents, total_dollars, change;

    // Get and display the customer's initials
    printf("Type in your 3 initials and press return> ");
    scanf(" %c %c %c", &first, &middle, &last); // Adding space before %c to handle any leftover whitespace
    printf("\n%c%c%c, please enter your coin information.\n", first, middle, last);

    // Get the count of each kind of coin
    printf("Number of $1 coins > ");
    scanf("%d", &dollars);
    
    printf("Number of quarters > ");
    scanf("%d", &quarters);
    
    printf("Number of dimes > ");
    scanf("%d", &dimes);
    
    printf("Number of nickels > ");
    scanf("%d", &nickels);
    
    printf("Number of pennies > ");
    scanf("%d", &pennies);

    // Compute total value in cents
    total_cents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickels + pennies;

    // Calculate dollars and remaining cents
    total_dollars = total_cents / 100;
    change = total_cents % 100;

    // Display the final credit slip
    printf("\n\n%c%c%c Coin Credit\nDollars: %d\nChange: %d cents\n", 
           first, middle, last, total_dollars, change);

    return 0;
}
/*
Type in your 3 initials and press return> JRH
JRH, please enter your coin information. 
Number of $ coins > 2 , 1
Number of quarters> 14 ,0
Number of dimes > 12 , 35
Number of nickels > 25 , 25
Number of pennies > 131 ,25,26
JRH Coin Credit 
Dollars: 9 
Change: 26 cents
*/