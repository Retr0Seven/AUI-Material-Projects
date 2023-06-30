#include <stdio.h>
#include <string.h>

#define MAX_LINE_LENGTH 100

int main() {
    FILE* file = fopen("input.txt", "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    char searchQuery[100];
    printf("Enter search query: ");
    fgets(searchQuery, sizeof(searchQuery), stdin);
    searchQuery[strcspn(searchQuery, "\n")] = '\0';  

    char line[MAX_LINE_LENGTH];
    int lineNum = 1;
    int found = 0;

    while (fgets(line, sizeof(line), file) != NULL) {
        if (strstr(line, searchQuery) != NULL) {
            printf("Found at line %d: %s", lineNum, line);
            found = 1;
        }
        lineNum++;
    }

    if (!found) {
        printf("Search query not found.\n");
    }

    fclose(file);
    return 0;
}
