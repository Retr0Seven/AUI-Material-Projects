#include <stdio.h>

int main() {
    int number;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("Number is even.\n");
        } else {
            printf("Number is odd. Program terminated.\n");
            break;
        }
    } while (1);

    return 0;
}
