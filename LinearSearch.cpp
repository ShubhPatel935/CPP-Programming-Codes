#include<iostream>
using namespace std;

int main()
{
 int n;
 int a[n];
 int key;
 int i;

 cout<<"Enter the number of elements=";
 cin>>n;
 
 cout<<"Enter the key value=";
 cin>>key;

 for(i=0;i<n;i++)
{
 cin>>a[i];
}

 for(i=0;i<n;i++)
 {
  if(a[i]==key)
  {
    cout<<"Found the key element "<<a[i];
    cout<<" At Index Number"<<i<<endl;
    break;//break is being used so that if there are 2 or more than 2 entries of key element during input it will terminate the loop   
          //if there are multiple key element then we cann remove break element
  }
 }
 if(a[i]!=key)
 {
  cout<<"Key element not found ";
 }
 return 0;
}