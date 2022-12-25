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
// index is used to place the values in which we want to insert data
struct node *insertionAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;

    ptr->data = data; // To accept the data which we want to insert in the list

    while (p->next != NULL)
    {
        p = p->next; // p will store the index of next element
    }
    // ptr will have a data
    ptr->next = NULL;
    p->next = ptr; // this will store the pointer value which is the data which we want to insert between the list

    return head; // we will return head because we will start the loop from the begning of the list
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

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = NULL;

    cout << "Before Insertion" << endl;

    Linkedlist(head); // we will call the Linkedlist function and we will pass the head value because it start from head

    // Here head will be this function because we have assing new head to the program
    head = insertionAtEnd(head, 5); // calling the function and passing the value which we want to insert at the first which is 89

    cout << "After Insertion" << endl;

    Linkedlist(head);

    return 0;
}