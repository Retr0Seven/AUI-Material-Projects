#include <stdio.h>

void calculateSumAndAverage(float *array, int size, float *sum, float *average) {
    *sum = 0;

    for (int i = 0; i < size; i++) {
        *sum += *(array + i);
    }

    *average = *sum / size;
}

int main() {
    float array[] = {1.5, 2.4, 3.1, 4.7, 5.2};
    int size = sizeof(array) / sizeof(array[0]);
    float sum, average;

    calculateSumAndAverage(array, size, &sum, &average);

    printf("Sum of the array: %.2f\n", sum);
    printf("Average of the array: %.2f\n", average);

    return 0;
}
