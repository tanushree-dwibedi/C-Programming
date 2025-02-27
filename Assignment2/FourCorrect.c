#include <stdio.h>

int leap(int year) {
    // Check if the year is a leap year
    if( (year % 4 == 0 && year%100!=0)|| (year%400==0)) {
        return 1 ;
    }
    return 0;
}

int day_of_year(int month, int day, int year) {
    int day_number = day;
    int is_leap = leap(year);
    int max_days;

    // Validate day based on month and leap year status
    switch (month) {
        case 1:  max_days = 31; break;
        case 2:  max_days = 28 + is_leap; break;
        case 3:  max_days = 31; break;
        case 4:  max_days = 30; break;
        case 5:  max_days = 31; break;
        case 6:  max_days = 30; break;
        case 7:  max_days = 31; break;
        case 8:  max_days = 31; break;
        case 9:  max_days = 30; break;
        case 10: max_days = 31; break;
        case 11: max_days = 30; break;
        case 12: max_days = 31; break;
        default:
            printf("Invalid month input\n");
            return -1;
    }

    if (day < 1 || day > max_days) {
        printf("Invalid day input for month %d\n", month);
        return -1;
    }

    // Use switch statement to add days from previous months
    switch (month - 1) {
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
        case 0:  break; // No need to add days for January
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
    if (day_number != -1) {
        printf("The day number for %d/%d/%d is: %d\n", month, day, year, day_number);
    }

    return 0;
}
