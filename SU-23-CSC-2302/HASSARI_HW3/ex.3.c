#include <stdio.h>

int main() {
    FILE* sourceFile = fopen("source.txt", "r");
    FILE* destFile = fopen("destination.txt", "w");
    if (sourceFile == NULL || destFile == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);
    printf("File copied successfully.\n");
    return 0;
}
