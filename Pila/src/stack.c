#include "stack.h"
#include <stdlib.h>

void stack_init(Stack* stack) {
    stack->top = NULL;
}

void stack_push(Stack* stack, Data value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = stack->top;
    stack->top = newNode;
}

int stack_pop(Stack* stack) {
    if (stack->top == NULL) {
        return -1; // Pila vacía
    }
    Node* temp = stack->top;
    int value = temp->data;
    stack->top = temp->next;
    free(temp);
    return value;
}

int stack_is_empty(Stack* stack) {
    return stack->top == NULL;
}