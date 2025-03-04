#include <stdio.h>
#include <math.h>

// Function to input the polynomial coefficients and degree
void get_poly(double coeff[], int *degree) {
    printf("Enter the degree of the polynomial: ");
    scanf("%d", degree);
    
    printf("Enter the coefficients (from a0 to a%d):\n", *degree);
    for (int i = 0; i <= *degree; i++) {
        printf("Coefficient a%d: ", i);
        scanf("%lf", &coeff[i]);
    }
}

// Function to evaluate the polynomial at a given value of z
double eval_poly(double coeff[], int degree, double z) {
    double result = 0.0;
    for (int i = 0; i <= degree; i++) {
        result += coeff[i] * pow(z, i); // coeff[i] * z^i
    }
    return result;
}

int main() {
    int degree;
    double coeff[100]; // Array to store coefficients (max degree 99)
    double z, result;

    // Get the polynomial from the user
    get_poly(coeff, &degree);

    // Evaluate the polynomial at various values of z
    printf("Enter a value for z to evaluate the polynomial: ");
    scanf("%lf", &z);

    result = eval_poly(coeff, degree, z);
    printf("The value of the polynomial at z = %.2lf is: %.2lf\n", z, result);

    return 0;
}
