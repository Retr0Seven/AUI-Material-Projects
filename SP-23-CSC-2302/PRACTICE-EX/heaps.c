#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node{
    int key;
    struct node* left;
    struct node* right;
}employee;

employee insert(node *root, int key)
{
    if(root == NULL)
    {
        employee *newnode = (employee*)malloc(sizeof(employee))
        newnode->key = key;
        newnode->left = NULL;
        newnode->right = NULL;
    }
    else if(key < root->key)
    {
        root->left = insert(root->left, key);
    }
    else if(key > root->key)
    {
        root->right = insert(root->right, key);
    }
return *root;
}



