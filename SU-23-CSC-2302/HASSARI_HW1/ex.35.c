#include <stdio.h>

void greet(char *name) {
    printf("Hello, %s! Welcome!\n", name);
}

int main() {
    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    greet(name);

    return 0;
}
