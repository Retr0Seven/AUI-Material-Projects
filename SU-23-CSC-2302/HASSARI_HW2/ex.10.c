#include <stdio.h>

typedef struct {
    char name[50];
    float hoursWorked;
    float hourlyRate;
} Employee;

Employee employee;

float calculatePay() {
    return employee.hoursWorked * employee.hourlyRate;
}

int main() {
    printf("Enter employee name: ");
    scanf("%s", employee.name);
    printf("Enter hours worked: ");
    scanf("%f", &employee.hoursWorked);
    printf("Enter hourly rate: ");
    scanf("%f", &employee.hourlyRate);
    float totalPay = calculatePay();
    printf("Employee: %s\n", employee.name);
    printf("Total Pay: %.2f\n", totalPay);
    return 0;
}
