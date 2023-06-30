#include <stdio.h>

int main() {
    int array[100];
    int size, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    printf("Enter the elements:\n");

    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
        sum += array[i];
    }

    average = (float)sum / size;

    printf("Average of the array elements: %.2f\n", average);

    return 0;
}
