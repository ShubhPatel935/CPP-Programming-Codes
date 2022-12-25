#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int element)
{
 for(int i=0;i<size;i++)
 {
  if(arr[i]==element)
  {
   return i; 
  }
 }
 return -1;
}

int main()
{
 int n;
 cout<<"Enter the size of array=";
 cin>>n;
 cout<<"Enter the values in ascending order"<<endl;
 int arr[n];
 for(int i=0;i<n;i++)
 {
  cin>>arr[i];
 }
 int element;
 cout<<"Enter the element which you want to find in the array=";
 cin>>element;
 int search=linearsearch(arr,n,element);
 cout<<"Element="<<element<<" was found at index number="<<search;
 return 0;
}
