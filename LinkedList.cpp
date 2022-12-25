#include <iostream>
#include <stdlib.h>
using namespace std;

struct node // Node is the name of linked list
{
    int data;          // it will store the data
    struct node *next; // next is a pointer which will store the data of next element
};

void Linkedlist(struct node *pointer) // pointer will point it to struct node which will point it to data
{
    while (pointer != NULL) // This will run it untill pointer is equal to NULL
    {
        cout << "Element:" << pointer->data << endl; // This will print the data

        pointer = pointer->next; // This will increment the pointer to next data
    }
}

int main()
{
    struct node *head; // declared name of the variable in which we aree gonna store the data
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 13;
    third->next = fourth;

    fourth->data = 62;
    fourth->next = NULL;

    Linkedlist(head); // we will call the Linkedlist function and we will pass the head value because it start from head

    return 0;
}