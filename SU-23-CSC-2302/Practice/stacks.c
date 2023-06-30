#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

//stack initiation 
typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initStack(Stack *stack) {
    stack->top = -1;
}

