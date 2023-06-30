#include <stdio.h>

typedef struct {
    char brand[50];
    char model[50];
    int year;
} Car;

int main() {
    int numCars;
    printf("Enter the number of cars: ");
    scanf("%d", &numCars);
    Car cars[numCars];
    for (int i = 0; i < numCars; i++) {
        printf("\nEnter details for car: %d\n", i + 1);
        printf("Enter car brand: ");
        scanf("%s", cars[i].brand);
        printf("Enter car model: ");
        scanf("%s", cars[i].model);
        printf("Enter car year: ");
        scanf("%d", &cars[i].year);
    }
    printf("\nCar Rental System:\n");
    for (int i = 0; i < numCars; i++) {
        printf("Car %d\n", i + 1);
        printf("Brand: %s\n", cars[i].brand);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("\n");
    }
    return 0;
}
