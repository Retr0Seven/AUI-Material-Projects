#include<stdio.h>
#include<stdlib.h>

typedef struct tree {
    int data;
    struct tree *left, *right;
} tree;

tree *root = NULL;

void insert(tree *root, int data) {
    if (root == NULL) {
        root = malloc(sizeof(*root));
        root->data = data;
        root->left = NULL;
        root->right = NULL;
        return;
    }

    tree *node = (tree*)malloc(sizeof(tree));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    if (root->left == NULL) {
        root->left = node;
        printf("Node inserted successfully\n");
        return;
    } else {
        root->right = node;
        printf("Node inserted successfully\n");
        return;
    }
}

int main() {
    insert(root, 1);
    insert(root, 2);
    insert(root, 3);
    insert(root, 4);
    return 0;
}
