#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct _node{
    char name[20];
    int ID;
    char department[20];
    float salary;
    char position[20];
    struct _node* left;
    struct _node* right;
}employee;

_node* insert(node *root, char name, int ID, char department, float salary, char position)
{
    if(root==NULL)
    {
        node *newnode = (employee*)malloc(sizeof(employee))
        newnode->employee = employee;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
}

