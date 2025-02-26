#include <stdio.h>
#include <math.h>

int main() {
    // a. log10(10000.0)
    double result_a = log10(10000.0);
    
    // b. ceil(16.2)
    double result_b = ceil(16.2);
    
    // c. floor(−7.5) * pow(3.0, 2.0)
    double result_c = floor(-7.5) * pow(3.0, 2.0);
    
    // d. floor(21.8 + 0.8)
    double result_d = floor(21.8 + 0.8);
    
    // e. sqrt(ceil(fabs(−7.4)))
    double result_e = sqrt(ceil(fabs(-7.4)));

    // Output the results
    printf("a. log10(10000.0) = %f\n", result_a);
    printf("b. ceil(16.2) = %f\n", result_b);
    printf("c. floor(-7.5) * pow(3.0, 2.0) = %f\n", result_c);
    printf("d. floor(21.8 + 0.8) = %f\n", result_d);
    printf("e. sqrt(ceil(fabs(-7.4))) = %f\n", result_e);
    
    return 0;
}
