#include <iostream>
using namespace std;

// Array swap
void fun(int f, int a[], int n)
{
    if (f >= n / 2)
        return;
    swap(a[f], a[n-f-1]);
    fun(f + 1, a, n);
}

int main()
{
    int n;
    cout << "Enter the size of the array: " << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Array print
    cout << "Entered array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
    fun(0, arr, n);

    // Array print after swap
    cout << "Swapped array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}