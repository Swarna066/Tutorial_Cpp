#include <iostream>
using namespace std;

void patern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= i ; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2*(n - i) - 1 ; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= i ; k++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    patern2(n);
    return 0;
}