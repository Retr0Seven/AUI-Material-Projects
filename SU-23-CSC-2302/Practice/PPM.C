#include <stdio.h>

typedef struct {
    unsigned char red;
    unsigned char green;
    unsigned char blue;
} Pixel;

void createPPMImage(const char* filename, int width, int height) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to create the file.\n");
        return;
    }

    Pixel image[height][width];

    int row, col;
    for (row = 0; row < height; row++) {
        for (col = 0; col < width; col++) {
            if ((row / 8) % 2 == (col / 8) % 2) {
                image[row][col].red = 255;
                image[row][col].green = 255;
                image[row][col].blue = 255;
            } else {
                image[row][col].red = 0;
                image[row][col].green = 0;
                image[row][col].blue = 0;
            }
        }
    }

    fprintf(file, "P3\n");
    fprintf(file, "%d %d\n", width, height);
    fprintf(file, "255\n");

    for (row = 0; row < height; row++) {
        for (col = 0; col < width; col++) {
            fprintf(file, "%d %d %d\n", image[row][col].red, image[row][col].green, image[row][col].blue);
        }
    }

    fclose(file);
}

int main() {
    const char* filename = "chessboard.ppm";
    int width = 64;
    int height = 64;

    createPPMImage(filename, width, height);

    printf("PPM image file created successfully.\n");

    return 0;
}
