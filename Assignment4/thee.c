#include <stdio.h>
#include <math.h>

// Function to calculate the square root using the iterative method
double squareRoot(int N, double *LG, double *NG) {
    double difference;
    do {
        *NG = 0.5 * (*LG + N / *LG); // Calculate the next guess
        difference = fabs(*NG - *LG); // Compute the difference
        *LG = *NG; // Update LG for the next iteration
    } while (difference > 0.005); // Loop until the difference is within the tolerance
    return *NG; // Return the final result
}

int main() {
    double LG = 1.0; // Initial guess
    double NG;       // Next guess
    int N;           // Input number

    // Input the number for which to calculate the square root
    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Error: Square root of a negative number is not defined in real numbers.\n");
        return 1;
    }

    // Call the function to compute the square root
    double result = squareRoot(N, &LG, &NG);

    // Output the result
    printf("The approximate square root of %d is %.5lf\n", N, result);

    return 0;
}
