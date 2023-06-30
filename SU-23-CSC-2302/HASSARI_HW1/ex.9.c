#include <stdio.h>

int main() {
    int count, i;
    float num, min, max;

    printf("Enter the number of floats: ");
    scanf("%d", &count);

    printf("Enter float 1: ");
    scanf("%f", &num);

    min = max = num;

    for (i = 2; i <= count; i++) {
        printf("Enter float %d: ", i);
        scanf("%f", &num);

        if (num < min) {
            min = num;
        }

        if (num > max) {
            max = num;
        }
    }

    printf("Minimum: %f\n", min);
    printf("Maximum: %f\n", max);

    return 0;
}
