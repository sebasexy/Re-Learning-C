#include <stdio.h>
#include <stdlib.h>

int MAXSIZE = 8;
int stack[8];
int top = -1;

int isEmpty()
{
    return (top == -1);
}

int isFull()
{
    return (top == MAXSIZE);
}

int peek()
{
    return stack[top];
}

int pop()
{
    int data;
    if(!isEmpty())
    {
        data = stack[top];
        top--;
        return data;
    }else{
        printf("Empty stack");
    }
}

int push(int data)
{
    if(!isFull()){
        top ++;
        stack[top] = data;
    }else{
        printf("Stack is full");
    }
}

int main()
{
    push(10);
    push(15);
    push(1);
    push(5);

    printf("Top: %d\n",  peek());

    while(!isEmpty())
    {
        int currTop = pop();
        printf("Element: %d\n", currTop);
    }

    printf("Stack is empty: %s\n", isEmpty()?"true":"false" );

    return 0;
}