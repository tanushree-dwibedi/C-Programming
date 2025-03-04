#include <stdio.h>
#include <math.h> // For sqrt()

#define SIZE 5
#define SENTINEL -1

int main() {
    int x[SIZE], y[SIZE], z[SIZE];
    int n = 0;
    int tempX, tempY;
    double sumZ = 0;

    printf("Enter pairs of numbers for the lists (terminate with %d for both numbers):\n", SENTINEL);

    // Input loop for x and y
    while (n < SIZE) {
        printf("Enter x[%d]: ", n);
        scanf("%d", &tempX);
        printf("Enter y[%d]: ", n);
        scanf("%d", &tempY);

        if (tempX == SENTINEL && tempY == SENTINEL) {
            break;
        }

        x[n] = tempX;
        y[n] = tempY;
        z[n] = x[n] * y[n]; // Calculate product and store in z
        sumZ += z[n];       // Add to sum of z values
        n++;
    }

    // Display arrays in a three-column table
    printf("X \t Y \t Z ");
    printf("-------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d \t %d \t %d\n", x[i], y[i], z[i]);
    }

    // Compute and display the square root of the sum of the items in z
    double result = sqrt(sumZ);
    printf("\nSquare root of the sum of items in Z: %.2f\n", result);

    return 0;
}
