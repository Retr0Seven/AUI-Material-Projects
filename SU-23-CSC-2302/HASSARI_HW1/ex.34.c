#include <stdio.h>

void fibonacci(int n) {
    int num1 = 0, num2 = 1;

    printf("Fibonacci sequence up to %d: ", n);

    printf("%d ", num1);
    if (n > 1)
        printf("%d ", num2);

    for (int i = 2; i < n; i++) {
        int temp = num1 + num2;
        printf("%d ", temp);
        num1 = num2;
        num2 = temp;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
