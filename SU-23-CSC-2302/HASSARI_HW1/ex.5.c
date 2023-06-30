#include <stdio.h>

#define PI 3.14159

int main() {
    // Circle
    float radius, circleArea, circlePerimeter;
    scanf("%f", &radius);
    circleArea = PI * radius * radius;
    circlePerimeter = 2 * PI * radius;
    printf("%.2f\n", circleArea);
    printf("%.2f\n", circlePerimeter);

    // Rectangle
    float length, width, rectangleArea, rectanglePerimeter;
    scanf("%f", &length);
    scanf("%f", &width);
    rectangleArea = length * width;
    rectanglePerimeter = 2 * (length + width);
    printf("%.2f\n", rectangleArea);
    printf("%.2f\n", rectanglePerimeter);

    // Triangle
    float base, height, triangleArea, trianglePerimeter, side1, side2, side3;
    scanf("%f", &base);
    scanf("%f", &height);
    scanf("%f %f %f", &side1, &side2, &side3);
    triangleArea = 0.5 * base * height;
    trianglePerimeter = side1 + side2 + side3;
    printf("%.2f\n", triangleArea);
    printf("%.2f\n", trianglePerimeter);

    return 0;
}
