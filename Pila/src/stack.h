#ifndef STACK_H
#define STACK_H

typedef int Data;
typedef struct Node {
    Data data;
    struct Node* next;
} Node;

typedef struct {
    Node* top;
} Stack;

void stack_init(Stack* stack);
void stack_push(Stack* stack, Data value);
int stack_pop(Stack* stack);
int stack_is_empty(Stack* stack);

#endif // STACK_H