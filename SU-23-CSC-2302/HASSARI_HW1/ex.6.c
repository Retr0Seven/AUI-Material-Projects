#include <stdio.h>

int main() {
    float centimeters, meters, decimeters, kilometers;

    printf("Enter length in centimeters: ");
    scanf("%f", &centimeters);

    meters = centimeters / 100;
    decimeters = centimeters / 10;
    kilometers = centimeters / 100000;

    printf("Length in meters: %f\n", meters);
    printf("Length in decimeters: %f\n", decimeters);
    printf("Length in kilometers: %f\n", kilometers);

    return 0;
}
