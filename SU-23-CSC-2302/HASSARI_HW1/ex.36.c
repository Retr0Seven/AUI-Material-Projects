#include <stdio.h>

int max(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    int maximum = max(num1, num2);

    printf("Maximum: %d\n", maximum);

    return 0;
}
