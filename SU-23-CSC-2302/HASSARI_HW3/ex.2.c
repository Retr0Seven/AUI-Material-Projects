#include <stdio.h>

int main() {
    FILE* file = fopen("output.txt", "w");
    if (file == NULL) {
        printf("Failed to create the file.\n");
        return 1;
    }

    printf("Enter text: ");
    char text[100];
    fgets(text, sizeof(text), stdin);

    fprintf(file, "%s", text);

    fclose(file);
    printf("Text saved to file.\n");
    return 0;
}
