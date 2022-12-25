#include<iostream>
using namespace std;

void print(int arr[],int size)
{
 for(int i=0;i<size;i++)
 {
  cout<<arr[i]<<" ";
 }
 cout<<endl; //To print the element in same line
}

void indDeletion(int arr[], int size, int index)
{
    // code for Deletion
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i + 1];
    }  
}
 

int main()
{
  int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 0;
    print(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    print(arr, size);
    return 0;
}








