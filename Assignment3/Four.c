// #include <stdio.h>

// double fast_food_billions(int t) {
//     return 33.2 + 16.8 * t;
// }

// int main() {
//     int year, t;
//     printf("Enter a year after 2005: ");
//     scanf("%d", &year);

//     if (year > 2005) {
//         t = year - 2005;
//         double prediction = fast_food_billions(t);
//         printf("Predicted fast food charges for %d: $%.2f billion\n", year, prediction);
//     } else {
//         printf("Invalid input. Please enter a year after 2005.\n");
//     }

//     return 0;
// }
#include <stdio.h>

double fast_food_billions(int year) {
    int t = year - 2005; // Calculate years since 2005
    return 33.2 + 16.8 * t;
}

int main() {
    int year;

    printf("Enter a year after 2005 to predict fast food charges, or a year before 2005 to stop.\n");

    while (1) {
        printf("Enter year: ");
        scanf("%d", &year);

        if (year < 2005) {
            printf("Year entered is before 2005. Program stopping.\n");
            break;
        }

        double prediction = fast_food_billions(year);
        printf("Predicted fast food charges for %d: $%.2f billion\n", year, prediction);
    }

    return 0;
}
