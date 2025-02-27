#include <stdio.h>

int leap(int year) {
    // Check if the year is a leap year
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return 1;  // Leap year
            } else {
                return 0;  // Not a leap year
            }
        } else {
            return 1;  // Leap year
        }
    } else {
        return 0;  // Not a leap year
    }
}

int day_of_year(int month, int day, int year) {
    int day_number = day;
    int is_leap = leap(year);

    // Use a switch statement to add days from previous months
    switch (month - 1) {  // month - 1 so we start from the previous month
        case 11: day_number += 30; // November
        case 10: day_number += 31; // October
        case 9:  day_number += 30; // September
        case 8:  day_number += 31; // August
        case 7:  day_number += 31; // July
        case 6:  day_number += 30; // June
        case 5:  day_number += 31; // May
        case 4:  day_number += 30; // April
        case 3:  day_number += 31; // March
        case 2:  day_number += 28 + is_leap; // February
        case 1:  day_number += 31; // January
        case 0:  break; // No need to add days for month 1 (January)
    }

    return day_number;
}

int main() {
    int month, day, year;

    // Get user input
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter day (1-31): ");
    scanf("%d", &day);

    printf("Enter year: ");
    scanf("%d", &year);

    // Calculate and display the day number
    int day_number = day_of_year(month, day, year);
    printf("The day number for %d/%d/%d is: %d\n", month, day, year, day_number);

    return 0;
}
