#include <iostream>
#include <stdlib.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *arr;
};

int empty(struct Stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    struct Stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    s->arr[0] = 7;
    s->top++;

    if (empty(s))
    {
        cout << "Stack is empty";
    }
    else
    {
        cout << "Stack is not empty";
    }

    return 0;
}