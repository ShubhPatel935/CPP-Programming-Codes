#include <iostream>
#include <stdlib.h>
using namespace std;

struct stack
{
    int size;
    int top;
    int *arr;
};

// To check if stack is empty or not
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    return 0;
}

// To check if stack is full or not
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        cout << "Stack is not Full" << endl;
    }
    return 0;
}

int push(struct stack *ptr, int val)
{
    if (ptr->top == ptr->size - 1)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
    return 0;
}

int pop(struct stack *ptr)
{
    int val;
    if (ptr->top == -1)
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
    return 0;
}

int peek(struct stack *ptr, int i)
{
    int arrayInd = ptr->top - i + 1;
    if (arrayInd < 0)
    {
        cout << "Not a valid position" << endl;
    }
    else
    {
        return ptr->arr[arrayInd];
    }
    return 0;
}

int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    cout << "Stack has been created successfully" << endl;

    cout << "Before pushing, Full:" << isFull(sp) << endl;
    cout << "Before pushing, Empty:" << isEmpty(sp) << endl;
    push(sp, 10);
    push(sp, 42);
    push(sp, 41);
    push(sp, 61);
    push(sp, 72);
    push(sp, 35);
    push(sp, 32);
    push(sp, 62);
    push(sp, 51);
    push(sp, 11);

    for (int j = 1; j < sp->top + 1; j++)
    {
        cout << "The value at position:" << j << " is:" << peek(sp, j) << endl;
    }
    return 0;
}
