#include <stdio.h>

int main() {
    char str1[100], str2[100], concat[200];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    while (str1[i] != '\0') {
        concat[j] = str1[i];
        i++;
        j++;
    }

    i = 0;

    while (str2[i] != '\0') {
        concat[j] = str2[i];
        i++;
        j++;
    }

    concat[j] = '\0';

    printf("Concatenated string: %s\n", concat);

    return 0;
}
