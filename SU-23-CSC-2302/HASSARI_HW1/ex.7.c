#include <stdio.h>

int main() {
    float side1, side2, side3;

    printf("Enter the lengths of three sides: ");
    scanf("%f %f %f", &side1, &side2, &side3);

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The sides form a triangle.\n");
    } else {
        printf("The sides do not form a triangle.\n");
    }

    return 0;
}
