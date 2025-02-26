#include <stdio.h>

int main() {
    double value = -3.6175;

    printf("Using %%8.4f: |%8.4f|\n", value); // 4 decimal places, width 8
    printf("Using %%8.3f: |%8.3f|\n", value); // 3 decimal places, width 8
    printf("Using %%8.2f: |%8.2f|\n", value); // 2 decimal places, width 8
    printf("Using %%8.1f: |%8.1f|\n", value); // 1 decimal place, width 8
    printf("Using %%8.0f: |%8.0f|\n", value); // 0 decimal places, width 8
    printf("Using %%.2f: |%.2f|\n", value);   // 2 decimal places, no width

    return 0;
}
