#include <iostream>
using namespace std;

// Palindrom check
bool fun(int f, string &a, int n)
{
    if (f >= n / 2)
        return true;
    if(a[f] != a[n-f-1]) return false;
    return fun(f + 1, a, n);
}

int main()
{
    string s;
    cout << "Enter the string: " << endl;
    getline(cin , s);
    string org = s;
    int len = s.size();
    cout<< fun(0,s,len) << endl;
    // 1 means True, false means false
    return 0;
}