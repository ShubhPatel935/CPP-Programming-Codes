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

int Insertion(int arr[],int size,int element,int index,int capacity)
{
  if(size>=capacity)
  {
     return -1;
  }
  else 
  {
     for(int i=size-1;i>=index;i--) //index at which element is to be stored 
     {
        arr[i+1]=arr[i];
     }
     arr[index]=element;
  }
  return 0;
}

int main()
{
 int arr[100]={1,2,4,5,6};
 int size=5;
 
 int capacity=100;   //capacity is the size of the array which is 100
 
 int element=3;  //this is which we want to insert in the element 
 int index=2;    //this is the index of the element which we want to install the element 
 
 print(arr,size); // To print the actual array before Insertion
 size=size+1;
 Insertion(arr,size,element,index,capacity); //calling the function to perform the insertion function 
 print(arr,size); //To print the function after the insertion process
 
 
 return 0;
 
}








