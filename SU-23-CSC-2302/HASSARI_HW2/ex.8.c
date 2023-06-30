#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
} Product;

int main() {
    int numProducts;
    printf("Enter the number of products: ");
    scanf("%d", &numProducts);
    Product products[numProducts];
    for (int i = 0; i < numProducts; i++) {
        printf("\nEnter details for product %d:\n", i + 1);
        printf("Enter product name: ");
        scanf("%s", products[i].name);
        printf("Enter product price: ");
        scanf("%f", &products[i].price);
        printf("Enter product quantity: ");
        scanf("%d", &products[i].quantity);
    }
    printf("\nProduct Inventory:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Product %d\n", i + 1);
        printf("Name: %s\n", products[i].name);
        printf("Price: %.2f\n", products[i].price);
        printf("Quantity: %d\n", products[i].quantity);
        printf("\n");
    }
    return 0;
}
