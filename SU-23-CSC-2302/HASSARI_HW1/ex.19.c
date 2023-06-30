#include <stdio.h>

int main() {
    int array[100];
    int size, max;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);

        if (i == 0 || array[i] > max) {
            max = array[i];
        }
    }

    printf("Maximum value in the array: %d\n", max);

    return 0;
}
