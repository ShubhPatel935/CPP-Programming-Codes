#include <iostream>
using namespace std;

int PrintArray(int *a, int n)
{
  int i;
  for (i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}
int InsertionSort(int *a, int n)
{
  int i, j; // for loop
  int key;

  for (i = 1; i < n; i++)
  {
    key = a[i];
    j = i - 1;

    while (j >= 0 && a[j] > key)
    {
      a[j + 1] = a[j];
      j--;
    }
    a[j + 1] = key;
  }
  return 0;
}
int main()
{
  int n = 6;
  int a[n] = {12, 54, 65, 7, 29, 9};

  cout << "Array Elements" << endl;
  PrintArray(a, n);
  InsertionSort(a, n);
  cout << "\nAfter Insertion Sort:" << endl;
  PrintArray(a, n);
  return 0;
}