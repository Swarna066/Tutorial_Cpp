#include<iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    int  n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    
    int f;
    cin >> f;
    while (f--)
    {
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }
    
    return 0;
}