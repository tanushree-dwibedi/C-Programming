#include <stdio.h>

int main() {
    int pollutantNumber;
    float gramsPerMile;
    int odometerReading;
    float permittedLevel;

    // Display pollutant options
    printf("Select a pollutant:\n");
    printf("(1) Carbon monoxide\n");
    printf("(2) Hydrocarbons\n");
    printf("(3) Nitrogen oxides\n");
    printf("(4) Nonmethane hydrocarbons\n");
    
    // Take user inputs
    printf("Enter pollutant number (1-4): ");
    scanf("%d", &pollutantNumber);
    
    if (pollutantNumber < 1 || pollutantNumber > 4) {
        printf("Invalid pollutant number.\n");
        return 1;
    }

    printf("Enter number of grams emitted per mile: ");
    scanf("%f", &gramsPerMile);

    printf("Enter odometer reading: ");
    scanf("%d", &odometerReading);
    
    // Determine permitted level based on pollutant type and odometer reading
    if (odometerReading <= 50000) {
        // First 50,000 miles limits
        if (pollutantNumber == 1) {
            permittedLevel = 3.4;
        } else if (pollutantNumber == 2) {
            permittedLevel = 0.31;
        } else if (pollutantNumber == 3) {
            permittedLevel = 0.4;
        } else if (pollutantNumber == 4) {
            permittedLevel = 0.25;
        }
    } else {
        // Second 50,000 miles limits
        if (pollutantNumber == 1) {
            permittedLevel = 4.2;
        } else if (pollutantNumber == 2) {
            permittedLevel = 0.39;
        } else if (pollutantNumber == 3) {
            permittedLevel = 0.5;
        } else if (pollutantNumber == 4) {
            permittedLevel = 0.31;
        }
    }
    
    // Check if emissions exceed the permitted level
    if (gramsPerMile > permittedLevel) {
        printf("Emissions exceed permitted level of %.2f grams/mile.\n", permittedLevel);
    } else {
        printf("Emissions are within the permitted level of %.2f grams/mile.\n", permittedLevel);
    }
    
    return 0;
}
