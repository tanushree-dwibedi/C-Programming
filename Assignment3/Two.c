#include <stdio.h>
#define TAX 0.03625

int main() {
    int id, n;
    double hr, hwr, grossPay, netPay, totalPayroll = 0.0, average;

    // Prompt the user to enter the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Process each employee's data
    for (int i = 1; i <= n; i++) {
        printf("Enter the employee ID: ");
        scanf("%d", &id);
        
        printf("Enter the number of hours worked: ");
        scanf("%lf", &hr);
        
        printf("Enter the hourly wage rate: ");
        scanf("%lf", &hwr);

        // Calculate gross pay with time-and-a-half for hours over 40
        if (hr > 40) {
            grossPay = ((hr - 40) * 1.5 * hwr) + (40 * hwr);
        } else {
            grossPay = hwr * hr;
        }

        // Calculate net pay after tax deduction
        netPay = grossPay - (grossPay * TAX);

        // Display the employee's ID and net pay
        printf("Employee ID: %d\n", id);
        printf("Net Pay: $%.2lf\n", netPay);

        // Accumulate total payroll
        totalPayroll += netPay;
    }

    // Calculate average pay
    average = totalPayroll / n;

    // Display total payroll and average pay
    printf("Total Payroll: $%.2lf\n", totalPayroll);
    printf("Average Pay: $%.2lf\n", average);

    return 0;
}
