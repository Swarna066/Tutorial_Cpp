#include <iostream>
using namespace std;

void Binaryadd(int s1, int s2)
{
    int x = max(s1, s2), y = min(s1, s2), a, b;
    int result = 0, carry = 0, place = 1;
    while (x >= 0)
    {
        a = x % 10;
        b = y % 10;
        result = ((a + b + carry) % 2) * place + result;
        carry = (a + b + carry) / 2;

        x /= 10;
        y /= 10;
        place *= 10;
        if (x == 0 && carry == 0)
        {
            break;
        }
    }
    cout << "The sum is :" << result << endl;
}

int main()
{
    int s1, s2;
    cout << "Enter two binary strings:" << endl;
    cin >> s1 >> s2;
    Binaryadd(s1, s2);
    return 0;
}