#include <stdio.h>

int main() {
    double x1, y1, x2, y2;
    double slope, perp_slope, x_mid, y_mid, y_intercept;

    // Prompt the user to enter the coordinates of two points
    printf("Enter the coordinates of the first point (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the coordinates of the second point (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calculate the slope of the line segment
    if (x2 == x1) {
        printf("The line segment is vertical, so the perpendicular bisector will be horizontal.\n");
        x_mid = (x1 + x2) / 2;
        printf("Midpoint: (%.2f, %.2f)\n", x_mid, (y1 + y2) / 2);
        printf("Equation of the perpendicular bisector: x = %.2f\n", x_mid);
        return 0;
    }

    slope = (y2 - y1) / (x2 - x1);

    // Calculate the midpoint of the line segment
    x_mid = (x1 + x2) / 2;
    y_mid = (y1 + y2) / 2;

    // Calculate the slope of the perpendicular bisector (negative reciprocal)
    perp_slope = -1 / slope;

    // Calculate the y-intercept of the perpendicular bisector
    y_intercept = y_mid - (perp_slope * x_mid);

    // Output the results
    printf("\n--- Perpendicular Bisector Calculation ---\n");
    printf("Point 1: (%.2f, %.2f)\n", x1, y1);
    printf("Point 2: (%.2f, %.2f)\n", x2, y2);
    printf("Midpoint: (%.2f, %.2f)\n", x_mid, y_mid);
    printf("Slope of the original line: %.2f\n", slope);
    printf("Slope of the perpendicular bisector: %.2f\n", perp_slope);
    printf("Equation of the perpendicular bisector: y = %.2fx + %.2f\n", perp_slope, y_intercept);

    return 0;
}
