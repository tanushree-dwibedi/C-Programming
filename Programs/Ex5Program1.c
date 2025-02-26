#include <stdio.h>

int main() {
    double q, k = 1.5, A = 2.0, T1 = 100.0, T2 = 50.0, L = 10.0;

    // Assignment statement
    q = (k * A * (T1 - T2)) / L;

    // Output the result
    printf("q = %.2f\n", q);

    return 0;
}
