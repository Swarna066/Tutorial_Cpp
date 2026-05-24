#include<iostream>
using namespace std;

// Factorial
int  s( int n){
    if (n == 0) return 1;   
    return n * s(n-1);;
}

int main(){
    int n;
    cin >> n;
    cout << s(n);
    return 0;
}