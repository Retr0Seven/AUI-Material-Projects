#include <stdio.h>
#include <string.h>

void swapStrings(char **str1, char **str2) {
    char *temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

int main() {
    char *str1, *str2;
    char buffer[100];

    printf("Enter the first string: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    str1 = strdup(buffer);

    printf("Enter the second string: ");
    fgets(buffer, sizeof(buffer), stdin);
    buffer[strcspn(buffer, "\n")] = '\0';
    str2 = strdup(buffer);

    printf("Before swapping: str1 = %s, str2 = %s\n", str1, str2);

    swapStrings(&str1, &str2);

    printf("After swapping: str1 = %s, str2 = %s\n", str1, str2);

    free(str1);
    free(str2);

    return 0;
}
