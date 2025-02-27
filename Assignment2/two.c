#include <stdio.h>

void displayStep(const char* stepName, int time) {
    printf("%s: %d mins\n", stepName, time);
}

void breadMachineProcess(char breadType, int isDoubleSize, int isManual) {
    int primaryKneading, primaryRising, secondaryKneading, secondaryRising;
    int loafShaping, finalRising, baking, cooling;

    // Set time values based on bread type
    if (breadType == 'W') {
        primaryKneading = 15;
        primaryRising = 60;
        secondaryKneading = 18;
        secondaryRising = 20;
        loafShaping = 2;
        finalRising = 75;
        baking = 45;
        cooling = 30;
    } else if (breadType == 'S') {
        primaryKneading = 20;
        primaryRising = 60;
        secondaryKneading = 33;
        secondaryRising = 30;
        loafShaping = 2;
        finalRising = 75;
        baking = 35;
        cooling = 30;
    } else {
        printf("Invalid bread type selected.\n");
        return;
    }

    // Adjust baking time if the loaf size is double
    if (isDoubleSize) {
        baking = (baking * 3) / 2;
    }

    printf("\nStarting the bread-making process...\n\n");

    // Display steps
    displayStep("Primary Kneading", primaryKneading);
    displayStep("Primary Rising", primaryRising);
    displayStep("Secondary Kneading", secondaryKneading);
    displayStep("Secondary Rising", secondaryRising);
    displayStep("Loaf Shaping", loafShaping);

    // Stop here if manual baking is selected
    if (isManual) {
        printf("\nManual baking selected. Please remove the dough for manual baking after loaf shaping.\n");
        return;
    }

    // Continue to automatic baking steps
    displayStep("Final Rising", finalRising);
    displayStep("Baking", baking);
    displayStep("Cooling", cooling);
}

int main() {
    char breadType;
    int isDoubleSize, isManual;
    
    printf("Enter type of bread (W for White, S for Sweet): ");
    scanf(" %c", &breadType);
    
    printf("Is the loaf size double? (1 for Yes, 0 for No): ");
    scanf("%d", &isDoubleSize);

    printf("Is the baking manual? (1 for Yes, 0 for No): ");
    scanf("%d", &isManual);
    
    // Start the bread machine process
    breadMachineProcess(breadType, isDoubleSize, isManual);
    
    return 0;
}
