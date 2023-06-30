#include <stdio.h>

void arraySum(int *array, int size) {
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += *(array + i);
    }

    printf("Sum of array elements: %d\n", sum);
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    arraySum(array, size);

    return 0;
}
