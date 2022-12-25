#include <iostream>
using namespace std;

void merger(int arr[], int l, int mid, int r)
{
  int n1 = mid - l + 1;
  int n2 = r - mid;

  int a[n1];
  int b[n2];

  for (int i = 0; i < n1; i++)
  {
    a[i] = arr[l + i];
  }

  for (int i = 0; i < n2; i++)
  {
    b[i] = arr[mid + 1 + i];
  }

  int i = 0;
  int j = 0;
  int k = l;
  while (i < n1 && j < n2)
  {
    if (a[i] < b[j])
    {
      arr[k] = a[i];
      k++;
      i++;
    }
    else
    {
      arr[k] = b[j];
      k++;
      j++;
    }
  }
  while (i < n1)
  {
    arr[k] = a[i];
    k++;
    i++;
  }
  while (j < n2)
  {
    arr[k] = b[j];
    k++;
    j++;
  }
}

void split(int arr[], int l, int r)
{
  if (l < r)
  {
    int mid = (l + r) / 2;
    split(arr, l, mid);
    split(arr, mid + 1, r);
    merger(arr, l, mid, r);
  }
}

int main()
{
  int arr[] = {6, 3, 9, 5, 2, 8, 7, 1};
  int n = 8;
  int i;

  cout << "Before Sort:" << endl;

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  split(arr, 0, n - 1);

  cout << "After Sort:" << endl;

  for (i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}