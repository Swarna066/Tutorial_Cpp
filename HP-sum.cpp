#include <iostream>
using namespace std;

void SumHP()
{
    float a, d, n, s = 0.0;
    cout << "Enter the value of starting number, common difference, value of n" << endl;
    cin >> a >> d >> n;
    cout << "a=" << a << "\td=" << d << "\tn=" << n << endl;
    for (int i = 0; i < n; i++)
    {
        s = s + 1.0 / (a + i * d);
    }
    cout << "The value of the sum  is " << s << endl;
};

int main()
{
    SumHP();
    return 0;
}
