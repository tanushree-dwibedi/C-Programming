#include <stdio.h>

int main() {
    // Declaration of variables
    float hoursWorked, hourlyRate, overtimeHours;
    float regularPay, overtimePay, grossSalary;

    // Input: Get the hours worked, hourly rate, and overtime hours
    printf("Enter the hours worked: ");
    scanf("%f", &hoursWorked);
    
    printf("Enter the hourly rate: ");
    scanf("%f", &hourlyRate);
    
    printf("Enter the overtime hours worked: ");
    scanf("%f", &overtimeHours);

    // Calculate regular pay
    regularPay = hoursWorked * hourlyRate;

    // Calculate overtime pay (1.5 times the normal rate)
    overtimePay = overtimeHours * (1.5 * hourlyRate);

    // Calculate gross salary (regular pay + overtime pay)
    grossSalary = regularPay + overtimePay;

    // Output the gross salary
    printf("The gross salary is: %.2f\n", grossSalary);

    return 0;
}
