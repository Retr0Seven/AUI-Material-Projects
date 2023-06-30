#include <stdio.h>

int main() {
    int array[] = {2, 4, 6, 8, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    printf("Sum of the array elements: %d\n", sum);

    return 0;
}
