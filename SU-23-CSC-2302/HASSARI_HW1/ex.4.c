#include <stdio.h>

int main() {
    char input[100];
    printf("Write a sentence of your liking: ");
    gets(input);
    printf("You entered: %s\n", input);
    return 0;
}