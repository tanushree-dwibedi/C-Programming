#include <stdio.h>

// Function to convert heading to bearing
void headingToBearing(double heading) {
    if (heading < 0.0 || heading > 360.0) {
        printf("Invalid compass heading. Please enter a value between 0 and 360 degrees.\n");
        return;
    }

    if (heading == 0 || heading == 360) {
        printf("Bearing: North\n");
    } else if (heading == 90) {
        printf("Bearing: East\n");
    } else if (heading == 180) {
        printf("Bearing: South\n");
    } else if (heading == 270) {
        printf("Bearing: West\n");
    } else if (heading > 0 && heading < 90) {
        printf("Bearing: North %.2f degrees East\n", heading);
    } else if (heading > 90 && heading < 180) {
        printf("Bearing: South %.2f degrees East\n", 180.0 - heading);
    } else if (heading > 180 && heading < 270) {
        printf("Bearing: South %.2f degrees West\n", heading - 180.0);
    } else if (heading > 270 && heading < 360) {
        printf("Bearing: North %.2f degrees West\n", 360.0 - heading);
    }
}

int main() {
    double heading;

    // Get the compass heading from the user
    printf("Enter compass heading (0-360 degrees): ");
    scanf("%lf", &heading);

    // Convert the heading to a bearing
    headingToBearing(heading);

    return 0;
}
