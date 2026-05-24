#include<iostream>
using namespace std;

int  s( int n){
    int sum= 0;
    if (n == 0) return 0;   
    sum = n + s(n-1);
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << s(n);
    return 0;
}