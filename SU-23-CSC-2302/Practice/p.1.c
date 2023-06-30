#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    sourceFile = fopen("source.txt", "r");
    destinationFile = fopen("destination.txt", "w");

    if (sourceFile == NULL || destinationFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    fclose(sourceFile);
    fclose(destinationFile);
    return 0;
}
