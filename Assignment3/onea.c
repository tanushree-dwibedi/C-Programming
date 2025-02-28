//  Write a program that will find the smallest, largest, and average values in a collection of
//  N numbers. Get the value of N before scanning each value in the collection of N numbers.
#include <stdio.h>

int main() {
    int n;
    double x, sum = 0, min, max;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the numbers: ");
    
    // Initialize `min` and `max` with the first number
    scanf("%lf", &x);
    sum = x;
    min = x;
    max = x;

    // Loop from the second number onward
    for (int i = 1; i < n; i++) {
        scanf("%lf", &x);
        sum += x;
        
        if (x > max) max = x;
        if (x < min) min = x;
    }

    printf("Largest number = %lf \n", max);
    printf("Smallest number = %lf \n", min);
    printf("Sum = %lf \n", sum);
    printf("Average = %lf \n", sum / n);
    
    return 0;
}
