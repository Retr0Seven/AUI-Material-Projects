#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *head = NULL;

void create_node(int data) {
    if (head == NULL) {
        node *newnode = (node*)malloc(sizeof(node));
        head = newnode;
        newnode->data = data;
        newnode->next = NULL;
        printf("NODE Created!\n");
    } else {
        node *newnode = (node*)malloc(sizeof(node));
        newnode->data = data;
        newnode->next = NULL;
        node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newnode;
        printf("NODE Created!\n");
    }
}

void display() {
    node *temp = head;
    while (temp != NULL) {
        printf("->%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void add_node_at_sp(int position, int data) {
    node *newnode = (node*)malloc(sizeof(node));
    newnode->data = data;
    if (position == 0) {
        newnode->next = head;
        head = newnode;
    } else {
        int count = 0;
        node *current = head;
        while (count < position - 1 && current != NULL) {
            current = current->next;
            count++;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
    printf("Node added at position %d.\n", position);
}

void delete_node(int position) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }
    if (position == 0) {
        node *tmp = head;
        head = head->next;
        free(tmp);
        printf("Element Deleted successfully!\n");
    } else {
        node *current = head;
        int count = 0;
        while (count < position - 1 && current != NULL) {
            current = current->next;
            count++;
        }
        if (current == NULL || current->next == NULL) {
            printf("Invalid position.\n");
            return;
        }
        node* temp = current->next;
        current->next = current->next->next;
        free(temp);
        printf("Element Deleted successfully!\n");
    }
}

int main() {
    create_node(10);
    create_node(20);
    create_node(30);
    create_node(40);
    display();

    add_node_at_sp(1, 25);
    display();

    delete_node(1);
    display();

    return 0;
}
