#include<iostream>
using namespace std;
struct emp {
    char name[20];
    int sal;
};
int main(){
    emp e1,e2,e3,e4,e5;
    cout<<"Enter employees details"<<endl;
    cout<<"Enter employee 1's name and sallary"<<endl;
    cin>>e1.name>>e1.sal;
    cout<<"Enter employee 2's name and sallary"<<endl;
    cin>>e2.name>>e2.sal;
    cout<<"Enter employee 3's name and sallary"<<endl;
    cin>>e3.name>>e3.sal;
    cout<<"Enter employee 4's name and sallary"<<endl;
    cin>>e4.name>>e4.sal;
    cout<<"Enter employee 5's name and sallary"<<endl;
    cin>>e5.name>>e5.sal;
    float s;
    s=(e1.sal+e2.sal+e3.sal+e4.sal+e5.sal)/5;
    cout<<"The avarage sallary is "<<s<<endl;
    return 0;
}
