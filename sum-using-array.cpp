#include <iostream>
using namespace std;
#define N 5
int main()
{
    int x[N], y[N], z[N];
    cout << "Enter the value of x and y\n";
    for (int i = 1; i <= N; i++)
    {
        cout << "x[" << i << "]= ";
        cin >> x[i];
        cout << "y[" << i << "]= ";
        cin >> y[i];
        z[i] = x[i] + y[i];
    }
    for (int i = 1; i <= N; i++){
        cout << "The value of z[" << i << "] is =" << z[i] << endl;
    }
    return 0;
}