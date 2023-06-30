#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int len = strlen(str);
    if (len <= 1) {
        return;
    }
    char temp = str[0];
    str[0] = str[len - 1];
    str[len - 1] = temp;
    reverseString(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline character

    reverseString(str);

    printf("Reversed string: %s\n", str);
    return 0;
}
