#include <iostream>
using namespace std;

void patern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }

        for (int j = 0; j < 2 * (n - i) - 1; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void patern3(int n)
{
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int star = i;
        if (i > n)
        {
            star = 2 * n - i;
        }
        for (int j = 1; j <= star; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void patern4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int start = 0;
        if (i % 2 == 1)
            start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start;
            start = 1-start;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    patern4(n);
    return 0;
}