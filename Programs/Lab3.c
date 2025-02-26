#include <stdio.h>
#include <math.h>

int main() {
    double speed_kmh, distance_m, speed_ms, acceleration, time;

    // Input the speed in km/hr
    printf("Enter the speed of the jet in km/hr: ");
    scanf("%lf", &speed_kmh);

    // Input the distance in meters
    printf("Enter the distance in meters: ");
    scanf("%lf", &distance_m);

    // Convert speed from km/hr to m/s
    speed_ms = speed_kmh * 1000 / 3600;

    // Calculate acceleration using the formula: v^2 = 2as, so a = v^2 / (2s)
    acceleration = (speed_ms * speed_ms) / (2 * distance_m);

    // Calculate time using the formula: v = at, so t = v / a
    time = speed_ms / acceleration;

    // Output the results
    printf("Acceleration: %.2lf m/s^2\n", acceleration);
    printf("Time: %.2lf seconds\n", time);

    return 0;
}
