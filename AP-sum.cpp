// Sum of a arithmetic progression
#include <iostream>
using namespace std;

// where i use a function which has function type and arguments
// int SumAP(int a, int d, int n);
// int main()
// {
//     int x, y, z, w = 0;
//     cout << "Enter the value of starting number,common difference,value of n" << endl;
//     cin >> x >> y >> z;
//     cout << "x=" << x << " y=" << y << " Z=" << z << endl;
//     w=SumAP(x,y,z);
//     cout << "The sum of the arithmetic progression is " << w << endl;
//     return 0;
// }
// int SumAP(int a, int d, int n)
// {
//     int s = 0;
//     s = (2 * a + (n - 1) * d) * n / 2;
//     return s;
// }



// where i use a function which has function type and doesn't has arguments
// int SumAP();
// int main()
// {
//     int w=0;
//     w=SumAP();
//     cout << "The sum of the arithmetic progression is " << w << endl;
//     return 0;
// }
// int SumAP()
// {
//     int a,d,n,s = 0;
//     cout << "Enter the value of starting number,common difference,value of n" << endl;
//     cin >> a >> d >> n;
//     cout << "a=" << a << " d=" << d << " n=" << n << endl;
//     s = (2 * a + (n - 1) * d) * n / 2;
//     return s;
// }



// where i use a function which doesn't has function type but it has arguments
void SumAP(int a, int d, int n);
int main()
{
    int x, y, z;
    cout << "Enter the value of starting number,common difference,value of n" << endl;
    cin >> x >> y >> z;
    cout << "x=" << x << " y=" << y << " Z=" << z << endl;
    SumAP(x,y,z);
    return 0;
}
void SumAP(int a, int d, int n)
{
    int s = 0;
    s = (2 * a + (n - 1) * d) * n / 2;
    cout << "The sum of the arithmetic progression is " << s << endl;
}



// where i use a function which has neither function type nor arguments
// void SumAP();
// int main()
// {
//     SumAP();
//     return 0;
// }
// void SumAP()
// {
//     int a,d,n,s=0;
//     cout << "Enter the value of starting number,common difference,value of n" << endl;
//     cin >> a >> d >> n;
//     cout << "a=" << a << " d=" << d << " n=" << n << endl;
//     s = (2 * a + (n - 1) * d) * n / 2;
//     cout << "The sum of the arithmetic progression is " << s << endl;
// }
