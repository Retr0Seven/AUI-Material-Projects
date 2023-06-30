#include <stdio.h>

typedef struct {
    char title[100];
    char author[100];
    int publicationYear;
} Book;

int main() {
    Book book;
    printf("Enter book title: ");
    scanf("99[^\n]%*c", book.title);

    printf("Enter author name: ");
    scanf("99[^\n]%*c", book.author);

    printf("Enter publication year: ");
    scanf("%d", &book.publicationYear);

    printf("\nBook Details:\n");
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publication Year: %d\n", book.publicationYear);

    return 0;
}
