#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float x, p = 0.0;
    cout << "Enter the value of x" << endl;
    cin >> x;

    if (x >= 1.0 && x <= 3.0)
    {
        p = x * log10f(1 + x);
    }
    else
    {
        p = exp(-x) * log10f(1 + x);
    }
    
    cout << "The value of the function f(x) at " << x << " is =" << p << endl;
    return 0;
}