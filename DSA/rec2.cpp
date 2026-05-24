#include<iostream>
using namespace std;

void name_p( int n, int i){
    if(i > n)
        return;
        name_p(n, i + 1);
        cout<< i<<endl;

}

int main(){
    int n;
    cin >> n;
    int count = 1;
    name_p(n, count);
    return 0;
}