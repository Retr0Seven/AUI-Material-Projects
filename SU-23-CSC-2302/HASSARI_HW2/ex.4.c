#include <stdio.h>

typedef struct Employee {
    char name[50];
    int id;
    float salary;
}Employee;

int main() {
    int numEmployees;

    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

     Employee employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);

        printf("Enter employee name: ");
        scanf("%s", employees[i].name);

        printf("Enter employee ID: ");
        scanf("%d", &employees[i].id);

        printf("Enter employee salary: ");
        scanf("%f", &employees[i].salary);
    }

    printf("\nEmployee Records:\n");

    for (int i = 0; i < numEmployees; i++) {
        printf("Employee %d\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Salary: %.2f\n", employees[i].salary);
        printf("\n");
    }

    return 0;
}
