#include<iostream>
#include<stdlib.h>
using namespace std;

struct Stack
{
    int size;
    int top;
    int *arr; //this is used for dynamic memory
};

int isFull(struct Stack *ptr)
{
 if(ptr->top==ptr->size-1)
 {
  cout<<"Stack is Full"<<endl;
 }
 else
 {
  cout<<"Stack is not full"<<endl;
 }
 return 0;
}

void isEmpty(struct Stack *ptr)
{
 if(ptr->top==-1)
 {
  cout<<"Stack Underflow"<<endl;
 }
 else
 {
  cout<<"Stack is not underflow"<<endl;
 }
}

void push(struct Stack *ptr,int val)
{
    if(isFull(ptr))
    {
     cout<<"stack overflow"<<endl;
    }
    else 
    {
     ptr->top++;
     ptr->arr[ptr->top]=val;
    }
}


int main()
{
 struct Stack *sp=(struct Stack*)malloc(sizeof(struct Stack));//*sp(pointer) will store the address of struct stack
 sp->size=10;
 sp->top=-1;
 sp->arr=(int *)malloc(sp->size*sizeof(int));

 cout<<"Stack has been created succesfully"<<endl;

 isFull(sp);
 isEmpty(sp);
 push(sp,56);
 isFull(sp);
 isEmpty(sp);

 return 0;

}