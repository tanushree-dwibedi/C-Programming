#include <stdio.h>
#include <math.h>

int main() {
    int n;
    double x, sum = 0, sum_squares = 0, min, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");

    // Initialize `min` and `max` with the first number
    scanf("%lf", &x);
    sum = x;
    sum_squares = x * x; // Initial sum of squares
    min = x;
    max = x;

    // Loop from the second number onward
    for (int i = 1; i < n; i++) {
        scanf("%lf", &x);
        sum += x;
        sum_squares += x * x;

        if (x > max) max = x;
        if (x < min) min = x;
    }

    // Calculate average, range, and standard deviation
    double average = sum / n;
    double range = max - min;
    double std_dev = sqrt((sum_squares / n) - (average * average));

    printf("Max = %lf \n", max);
    printf("Min = %lf \n", min);
    printf("Sum = %lf \n", sum);
    printf("Average = %lf \n", average);
    printf("Range = %lf \n", range);
    printf("Standard Deviation = %lf \n", std_dev);

    return 0;
}
