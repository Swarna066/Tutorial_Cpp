#include <iostream>
#include <cmath>
using namespace std;

float SumGP();
int main()
{
    float w = 0.0;
    w = SumGP();
    cout << "The sum is " << w << endl;
    return 0;
}
float SumGP()
{
    float a, r, n;
    float s = 0.0;
    cout << "Enter the value of starting number, common difference, value of n" << endl;
    cin >> a >> r >> n;
    cout << "a=" << a << "\t r=" << r << " \t n=" << n << endl;
    if (r > 1)
    {
        s = (a * (powf(r, n) - 1)) / (r - 1);
    }
    else if (r < 1)
    {
        s = (a * (1 - powf(r, n))) / (1 - r);
    }
    else
    {
        s = n * a;
    }
    return s;
}