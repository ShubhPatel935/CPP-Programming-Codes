#include<iostream>
using namespace std;

int main()
{
 int i,j; //for loop
 int n; //size of array
 int a[n]; //array

 cout<<"Enter size of array=";
 cin>>n;

 cout<<"Enter element"<<endl;

 for(i=0;i<n;i++)
 {
  cin>>a[i];
 }

for(i=0;i<n-1;i++)
{
 for(j=i+1;j<n;j++)
 {
  if(a[i]>a[j])
  {
  swap(a[i],a[j]);
  }
 }
}

cout<<"After Insertion Sort"<<endl;

for(i=0;i<n;i++)
{
 cout<<a[i]<<" ";
}

return 0;

}