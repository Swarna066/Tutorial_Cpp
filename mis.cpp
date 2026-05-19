#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 5, 7, 3, 6, 4, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int m[10];
    for (int i = 0; i < 9; i++)
    {
        m[i] = i + 1;
    }
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (arr[j] == m[i])
            {
                m[i] = 0;
            }
        }
    }
    cout<<"The missing numbers are:"<<endl;
    for (int i = 0; i < 9; i++)
    {
        if (m[i] != 0)
        {
            cout << m[i] << endl;
        }
    }
    return 0;
}