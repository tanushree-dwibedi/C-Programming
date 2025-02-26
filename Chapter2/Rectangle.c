#include <stdio.h>
#define PI 3.14159265359

int main() {
    double outer_radius, inner_radius, thickness, density;
    int quantity;
    double washer_area, total_washer_material, leftover_material_area, total_rect_area;
    double sheet_length, sheet_width, leftover_weight;

    // Input the values
    printf("Enter outer radius of washer (cm): ");
    scanf("%lf", &outer_radius);
    printf("Enter inner radius of washer (cm): ");
    scanf("%lf", &inner_radius);
    printf("Enter thickness of material (cm): ");
    scanf("%lf", &thickness);
    printf("Enter density of material (g/cm^3): ");
    scanf("%lf", &density);
    printf("Enter number of washers to be manufactured: ");
    scanf("%d", &quantity);
    printf("Enter dimensions of the rectangular sheet (length and width in cm): ");
    scanf("%lf %lf", &sheet_length, &sheet_width);

    // Compute area of one washer
    washer_area = PI * (outer_radius * outer_radius - inner_radius * inner_radius);

    // Total material needed for all washers
    total_washer_material = washer_area * quantity;

    // Total area of the rectangular piece
    total_rect_area = sheet_length * sheet_width;

    // Compute leftover material area
    leftover_material_area = total_rect_area - total_washer_material;

    // Compute weight of leftover material
    leftover_weight = leftover_material_area * thickness * density;

    // Output the results
    printf("Total area of material needed for washers: %.2f cm^2\n", total_washer_material);
    printf("Leftover material area: %.2f cm^2\n", leftover_material_area);
    printf("Weight of leftover material: %.2f grams\n", leftover_weight);

    return 0;
}
