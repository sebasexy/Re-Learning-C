#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int value;
    struct node* next;
}node;

node* create(int data, node* next)
{
    node* new_node = (node*)malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Error\n");
        exit(0);
    }
    new_node->value =  data;
    new_node->next = next;

    return new_node;
}

node* prepend(node* head,int data)
{
    node* new_node = create(data,head);
    head = new_node;
    return head;
}

void traverse(node* head)
{
    node* cursor = head;
    while(cursor != NULL)
    {
        printf("Value: %d\n", cursor->value);
        cursor = cursor->next;
    }
}

int countElements(node* head)
{
    node* new_node = head;
    int counter = 0;

    while(new_node != NULL)
    {
        counter++;
        new_node = new_node->next;
    }
    return counter;
}

node* append(node* head, int value)
{
    node* new_node = head;

    while(new_node->next != NULL)
    {
        new_node = new_node->next;
    }
    
    node* tmp = create(value, NULL);
    new_node->next = tmp;

    return head;
}


int main()
{
    node* head;
    node* node1;
    node* node2;
    node* node3;

    node3 = create(150, NULL);
    node2 = create(-15, node3);
    node1 = create(50, node2);
    head = create(10, node1);

    
    traverse(head);

    int elements;
    elements = countElements(head);
    printf("Elements in the Linked List %d\n\n\n", elements);

    append(head, 250);

    traverse(head);
    elements = countElements(head);
    printf("Elements in the Linked List %d\n", elements);

    return 0;
}