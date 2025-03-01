#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to analyze the number
void analyze_number(int num, int *is_multiple, int *is_sum_even, int *is_prime_flag) {
    // Check if the number is a multiple of 7, 11, or 13
    if (num % 7 == 0 || num % 11 == 0 || num % 13 == 0) {
        *is_multiple = 1;
    } else {
        *is_multiple = 0;
    }

    // Calculate the sum of digits and determine if it's odd or even
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    *is_sum_even = (sum % 2 == 0) ? 1 : 0;

    // Check if the number is prime
    *is_prime_flag = is_prime(num) ? 1 : 0;
}

int main() {
    int numbers[] = {104, 3773, 13, 121, 77, 30751};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Number\tMultiple of 7/11/13\tSum of Digits (Even)\tPrime\n");
    printf("-------------------------------------------------------------\n");
int is_multiple, is_sum_even, is_prime_flag;
    for (int i = 0; i < size; i++) {
        

        // Analyze the current number
        analyze_number(numbers[i], &is_multiple, &is_sum_even, &is_prime_flag);

        // Print the results
        printf("%d\t%s\t\t\t%s\t\t\t%s\n",
               numbers[i],
               is_multiple ? "Yes" : "No",
               is_sum_even ? "Even" : "Odd",
               is_prime_flag ? "Yes" : "No");
    }

    return 0;
}
