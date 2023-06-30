#include <stdio.h>

int add(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;

    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);

    int sum = add(num1, num2);

    printf("Sum: %d\n", sum);

    return 0;
}
