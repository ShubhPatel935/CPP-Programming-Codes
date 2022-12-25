#include <iostream>
using namespace std;

int main()
{
    int n;
    int a[n];
    int i, j;
    int temp;

    cout << "Total elements=";
    cin >> n;

    cout << "Enter random values" << endl;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }

    cout << "After BUBBLE SORT" << endl;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}