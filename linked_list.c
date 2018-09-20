#include <stdio.h>

typedef struct LinkedList{
    int data;
    struct LinkedList *next;
};

typedef struct LinkedList *node;

node createNode()
{
    node tmp;
    tmp = (node)malloc(sizeof(struct LinkedList));

    tmp->next = NULL;
    return tmp;
}

node addNode(node head, int value)
{
    node tmp, p;
    tmp = createNode();

    tmp->data = value;
    if(head == NULL){
        head = tmp;
    }
    else
    {
        p = head;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = tmp;
    }
    return head;
}

int main()
{
    

    return 0;
}