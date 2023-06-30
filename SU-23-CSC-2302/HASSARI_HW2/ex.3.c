#include <stdio.h>

typedef struct rectangle {
    float length;
    float width;
}rectangle;

float area;

int main() {
    rectangle rectangle;

    printf("Enter length of rectangle: ");
    scanf("%f", &rectangle.length);

    printf("Enter width of rectangle: ");
    scanf("%f", &rectangle.width);

    area = rectangle.length * rectangle.width;

    printf("Area of rectangle: %.2f\n", area);

    return 0;
}
