#include <iostream>
using namespace std;

void BubbleSort(int arr[], int size)
{
  int i, j;
  for (i = 1; i < size; i++)
  {
    for (j = 0; j < size - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

void array(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

int main()
{

  int arr[] = {9, 20, 6, 10, 14, 8, 60, 11};

  int n = (sizeof(arr) / sizeof(arr[0]));

  BubbleSort(arr, n);
  array(arr, n);

  return 0;
}