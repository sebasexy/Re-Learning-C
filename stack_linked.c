#include <stdio.h>
#include <stdlib.h>

typedef struct Stack{
    int val;
    struct Stack* next;
}stack;

stack* newNode(int data)
{
    stack* new_node = (stack*)malloc(sizeof(stack));
    new_node->val = data;
    new_node->next = NULL;
    return new_node;

}

int isEmpty(struct stack* head)
{
    return !head;
}


int main()
{
    stack* head = newNode(5);
    printf("%d\n", isEmpty(&head));
    return 0;
}
