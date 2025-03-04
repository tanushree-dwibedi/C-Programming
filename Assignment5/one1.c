#include <stdio.h>

// Function to calculate the check digit and validate the barcode
void validateUPC(int barcode[], int n) {
    int oddSum = 0, evenSum = 0, step2Result, checkDigit;

    // Step 1: Calculate the sum of digits in odd-numbered positions and multiply by 3
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 == 0) { // Odd-numbered position (1-based)
            oddSum += barcode[i];
        }
    }
    int step1Result = oddSum * 3;

    // Step 2: Add the sum of digits in even-numbered positions to step 1 result
    for (int i = 0; i < n - 1; i++) {
        if (i % 2 != 0) { // Even-numbered position (1-based)
            evenSum += barcode[i];
        }
    }
    step2Result = step1Result + evenSum;

    // Step 3: Calculate the check digit
    int lastDigit = step2Result % 10;
    if (lastDigit == 0) {
        checkDigit = 0;
    } else {
        checkDigit = 10 - lastDigit;
    }

    // Output the barcode and intermediate results
    printf("Barcode: ");
    for (int i = 0; i < n; i++) {
        printf("%d", barcode[i]);
    }
    printf("\n");

    printf("Step 1 result (odd positions sum * 3): %d\n", step1Result);
    printf("Step 2 result (add even positions sum): %d\n", step2Result);
    printf("Calculated check digit: %d\n", checkDigit);

    // Validate the barcode
    if (checkDigit == barcode[n - 1]) {
        printf("Validated.\n");
    } else {
        printf("Error in barcode.\n");
    }
}

int main() {
    int n = 12;
    int barcode[n];

    // Prompt user to input 12 digits of the barcode
    printf("Enter the 12 digits of the barcode separated by spaces:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &barcode[i]);
    }

    // Validate the barcode
    validateUPC(barcode, n);

    return 0;
}
