//  The square root of a number N can be approximated by repeated calculation using the formula
//  NG=0.5(LG+N/LG)
//  where NG stands for next guess and LG stands for last guess. Write a function that calculates
//  the square root of a number using this method.
//  i The initial guess will be the starting value of LG . The program will compute a value for NG
//  using the formula given. The difference between NG and LG is checked to see whether these
//  two guesses are almost identical. If they are, NG is accepted as the square root; otherwise,
//  the next guess (NG) becomes the last guess (LG) and the process is repeated (another value
//  is computed for NG, the difference is checked, and so on). The loop should be repeated until
//  the difference is less than 0.005. Use an initial guess of 1.0.
#include <stdio.h>
#include <math.h>

// Function to calculate the square root using the iterative method
void calculateSquareRoot(double N, double *result) {
    double LG = 1.0; // Initial guess
    double NG;       // Next guess
    double difference;

    // Iteratively calculate square root until the difference is less than 0.005
    while (1) {
        NG = 0.5 * (LG + N / LG); // Compute the next guess
        difference = fabs(NG - LG); // Calculate the difference between guesses

        if (difference < 0.005) { // Check if the difference is within the tolerance
            *result = NG; // Store the final result in the pointer
            break; // Exit the loop if the difference is small enough
        }

        LG = NG; // Update LG for the next iteration
    }
}

int main() {
    double N;
    double sqrtResult; // Variable to store the result

    // Input the number for which to calculate the square root
    printf("Enter a positive number: ");
    scanf("%lf", &N);

    if (N < 0) {
        printf("Error: Square root of a negative number is not defined in real numbers.\n");
        return 1;
    }

    // Call the function to calculate the square root
    calculateSquareRoot(N, &sqrtResult);

    // Output the result
    printf("The approximate square root of %.5lf is %.5lf\n", N, sqrtResult);

    return 0;
}
