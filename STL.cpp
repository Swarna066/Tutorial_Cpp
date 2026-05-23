// #include<bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;
    if(p1.first> p2.first ) return true;
    return false;
}

int main()
{
    // vector<int> v ;
    // v.push_back(20);
    // v.push_back(10);
    // v.push_back(5);
    // v.push_back(6);
    // v.push_back(7);
    // // cout << v[4];
    // vector<int> :: iterator it = v.begin();
    // cout << *(it) << endl;
    // cout << v.back()<< endl;
    // for(auto it : v)
    //     cout << it << " ";
    // cout << v.empty();

    //     list<int> ls;
    //     ls.push_back(2);
    //     ls.emplace_back(4);
    //     ls.push_front(5);
    //     ls.emplace_front();
    //     for (int n : ls) {
    //        std::cout << n << " ";
    //    }

    // map<int, int> mpp;
    // mpp.insert({1,2});
    // mpp.insert({2,1});
    // mpp.insert({4,1});
    // for(auto it : mpp){
    //     cout << it.first << " "<< it.second<< endl;
    // }

    // int a[]= {1,5,3,2};
    // // sort(a, a+4);
    // sort(a, a+3, greater<int>());
    // // sort(a+2, a+4);
    // for(auto i:a)
    //     cout << i <<endl;

    // pair<int, int> a[3] = {{1, 2}, {2, 1}, {4, 1}};
    // sort(a,a+3,comp);
    // for (auto i : a)
    //     cout << i.first <<" "<< i.second<< endl;
    
    return 0;
}