#include <stdio.h>

int main() {
    FILE* inputFile = fopen("input.txt", "r");
    FILE* outputFile = fopen("output.txt", "w");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    int key;
    printf("Enter encryption key (between 1 and 25): ");
    scanf("%d", &key);

    char ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') {
            ch = ((ch - 'A') + key) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            ch = ((ch - 'a') + key) % 26 + 'a';
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);
    printf("File encrypted successfully.\n");
    return 0;
}
