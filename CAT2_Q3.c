#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage, grossPay, tax, netPay;
    
    
    // Request input from the user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);


    // Calculate gross pay
    if (hoursWorked > 40) {
        grossPay = (40 * hourlyWage) + ((hoursWorked - 40) * hourlyWage * 1.5);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    // Calculate tax
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }

    // Calculate net pay
    netPay = grossPay - tax;

    // Print the results
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Tax: $%.2f\n", tax);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}