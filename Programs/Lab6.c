#include <stdio.h>

// Function to calculate Celsius temperature at a given depth
double celsiusAtDepth(double depth_km) {
    return 10.0 * depth_km + 20.0;
}

// Function to convert Celsius to Fahrenheit
double fahrenheit(double celsius) {
    return 1.8 * celsius + 32.0;
}

int main() {
    double depth_km, temp_celsius, temp_fahrenheit;

    // Input the depth in kilometers
    printf("Enter the depth inside the Earth (in kilometers): ");
    scanf("%lf", &depth_km);

    // Calculate the temperature at the given depth in Celsius
    temp_celsius = celsiusAtDepth(depth_km);

    // Convert the temperature from Celsius to Fahrenheit
    temp_fahrenheit = fahrenheit(temp_celsius);

    // Output the results
    printf("At a depth of %.2f kilometers:\n", depth_km);
    printf("Temperature in Celsius: %.2f°C\n", temp_celsius);
    printf("Temperature in Fahrenheit: %.2f°F\n", temp_fahrenheit);

    return 0;
}
