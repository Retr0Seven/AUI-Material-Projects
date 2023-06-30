#include <stdio.h>

int findMax(int *array, int size) {
    int max = *array;

    for (int i = 1; i < size; i++) {
        if (*(array + i) > max) {
            max = *(array + i);
        }
    }

    return max;
}

int main() {
    int array[] = {5, 8, 3, 2, 9, 1};
    int size = sizeof(array) / sizeof(array[0]);

    int max = findMax(array, size);

    printf("Maximum element in the array: %d\n", max);

    return 0;
}
