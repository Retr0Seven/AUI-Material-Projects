#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array + i));
    }
    printf("\n");
}

int main() {
    int size;
    int *array;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    array = (int *)malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", array + i);
    }

    printf("Elements of the array: ");
    printArray(array, size);

    free(array);

    return 0;
}
