#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int element)
{
  int low, mid, high;
  low = 0;
  high = size - 1;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (arr[mid] == element)
    {
      return mid;
    }
    else if (arr[mid] < element)
    {
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}

int main()
{
  int n;
  int element;

  cout << "Enter the size of array=";
  cin >> n;

  int a[n];

  cout << "Key Element=";
  cin >> element;

  cout << "Enter the elements in ascending order" << endl;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int x = binarysearch(a, n, element);

  if (x != 1)
  {
    cout << "Element=" << element << " found at index=" << (x);
  }
  else
  {
    cout << "Element=" << element << " didn't found";
  }

  return 0;
}