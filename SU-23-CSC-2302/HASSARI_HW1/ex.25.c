#include <stdio.h>

int countOccurrences(int *array, int size, int element) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (*(array + i) == element) {
            count++;
        }
    }

    return count;
}

int main() {
    int array[] = {1, 2, 3, 2, 4, 2, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int element;

    printf("Enter the element to count its occurrences: ");
    scanf("%d", &element);

    int occurrences = countOccurrences(array, size, element);

    printf("Number of occurrences of %d: %d\n", element, occurrences);

    return 0;
}
